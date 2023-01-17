#include <stdio.h>

void matrix_inner_dot(int* new_matrix, int *left_matrix, int* right_matrix) {

    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            *(new_matrix + i*5 + j) = *(left_matrix + i*5 + j) + *(right_matrix + i*5 + j);
            // *(*(new_matrix+i)+j) 이거는 main에서 다른 함수로 가져와서는 사용할 수 없는듯. 이렇게 하려면 함수 부를때 * 떼고 넣어야 함.
        }
    }

    return;
}


int main(void) {
    
    // 배열 1 선언, 입력
    int matrix1[5][5];
    printf("Input First Matrix : \n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // 배열 2 선언, 입력
    int matrix2[5][5];
    printf("Input Second Matrix : \n");
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // 새 배열 선언하고 계산.
    int new_matrix[5][5];
    matrix_inner_dot(*new_matrix, *matrix1, *matrix2);

    // 배열 출력
    for (int i=0; i<5; i++) {
        printf("\n");
        for (int j=0; j<5; j++) {
            printf("%d ", new_matrix[i][j]);
        }
    }


    return 0;
}