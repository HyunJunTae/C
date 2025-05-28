#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int count = 1;
int N;
int M;

int *set_id;           // 셀의 집합 ID
int *set_id_2; // 그 아래의 셀의 집합



// Eller 알고리즘
void generate_eller_maze() {

    FILE *file = fopen("mymaze123.maz", "w");


    srand(time(NULL));

    // 미로의 맨 윗줄 그려주기.
    for (int i=0; i<N; i++) {
        fprintf(file, "%s", "+-");
    }
    fprintf(file, "%s", "+\n"); 



    // M은 미로의 높이. 한 줄씩 실행하고 미로의 높이만큼 실행
    for (int row = 0; row < M; row++) {

        // 1. set_id 초기화.
        // 만약 이미 집합값이 들어있다면 그대로 두고, -1이 들어있다면 새로운 집합값을 넣어주기
        for (int i = 0; i < N; i++) {
            if (set_id[i] == -1)
                set_id[i] = count++;
        }



        // 2. 현재 행에서, 랜덤으로 빈 벽 출력하기
        // 맨 마지막 방은 나중에 따로 출력
        fprintf(file, "%s", "|"); // 일단 맨 왼쪽 벽은 출력
        for (int i=0; i<N-1; i++){
            // 방 한 칸 출력
            fprintf(file, "%s", " ");

            // 현재 칸과 다음 칸의 집합이 같으면, 벽 만들기
            if (set_id[i] == set_id[i+1]) {
                fprintf(file, "%s", "|");
            }
            // 현재 칸과 다음 칸 집합이 다르면, 랜덤으로 빈칸 만들기
            else if (rand() % 2 == 0) {
                fprintf(file, "%s", " ");
                set_id[i + 1] = set_id[i];
            }
            // 랜덤 실패했다면 벽 만들기
            else {
                fprintf(file, "%s","|");
            }
        }
        fprintf(file, "%s", " |\n"); // 맨 마지막 방 출력


        // 만약 마지막 행이라면, 아랫줄 계산 생략
        if (row == M-1) break;

        // 3. 현재 행과 그 아래 다음 행 사이의 벽 제거.
        //    만약 제거되면, 해당 벽은 위의 벽과 같은 집합.
        // 방 모서리 출력
        fprintf(file, "%s", "+");
        int wall_deleted = 0;
        for( int i=0; i<N-1; i++) {
            
            // 만약 이번 집합에서 부숴진 아래쪽 벽이 없는데,
            // 다음 칸의 집합이 이번 칸의 집합과 다르다면, 무조건 부수기.
            if (set_id[i] != set_id[i+1] && wall_deleted == 0) {
                fprintf(file, "%s", " +");
                set_id_2[i] = set_id[i];
            }

            // 랜덤으로 아래쪽 벽 제거
            else if (rand() % 2 == 0) {
                fprintf(file, "%s", " +");
                set_id_2[i] = set_id[i];
                wall_deleted = 1;
            }

            else {
                fprintf(file, "%s", "-+");
            }

            // 새로운 집합으로 넘어가면, wall_deleted를 0으로 재설정
            if (set_id[i]!= set_id[i+1]) {
                wall_deleted = 0;
            }
            
        } 
        
        // 3.2 행의 마지막 칸의 경우는 따로 계산.
        // 위에서 wall_deleted는 이미 계산되었음
        // 같은 집합이라면, 부서진 칸 없다면 wall_deleted는 그대로 0
        // 만약 새로운 집합이라면, wall_deleted = 0
        // 부숴지지 않았다면, 무조건 부수기.
        if (wall_deleted == 0) {
            fprintf(file, "%s", " +\n");
            set_id_2[N-1] = set_id[N-1];
        }
        // 랜덤으로 벽 부시기.
        else if (rand() % 2 == 0) {
            fprintf(file, "%s", " +\n");
            set_id_2[N-1] = set_id[N-1];
            wall_deleted = 1;
        }
        else {
            fprintf(file, "%s", "-+\n");
        }


        // 4. set_id_2의 값을 set_id에 복사.
        //    set_id_2 는 -1로 초기화
        for (int i=0; i<N; i++) {
            set_id[i] = set_id_2[i];
            set_id_2[i] = -1;
        }
    }

    // 미로의 맨 아랫줄 그려주기.
    for (int i=0; i<N; i++) {
        fprintf(file, "%s", "+-");
    }
    fprintf(file, "%s", "+\n");

}

int main() {
    
    // printf("N input : ");
    // scanf("%d", &N);
    // printf("M input : ");
    // scanf("%d", &M);

    N = 5;
    M = 5;

    // 메모리 할당 및 set의 초기값 설정

    set_id = (int*)malloc(N * sizeof(int));
    set_id_2 = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        set_id[i] = -1;
        set_id_2[i] = -1;
    }

    generate_eller_maze();
    // print_maze();


    // 메모리 해제
    free(set_id);
    free(set_id_2);

    return 0;
}


// 개선점
// 필드를 배열에 저장해둔 다음에 출력하는게 아니라, 한 줄 만들고 set_id 배열 사용해서 바로 그리는 식으로. 메모리 줄이기.