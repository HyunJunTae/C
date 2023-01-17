#include <stdio.h>


void print_Array(int* matrix, int row, int col, int n) {

    printf("%d ", *(matrix + row*n + col));

    return;
}


int main(void) {

    int N;
    printf("Input N : ");
    scanf("%d", &N);

    // 배열 입력
    int matrix[N][N];
    int num;
    for (int i=0; i<N; i++) {
        printf("Input Matrix row %d : ", i+1);
        for (int j=0; j<N; j++) {
            // scanf("%d", &num);
            // matrix[i][j] = num; // 이렇게해도됨.
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n\n");

    //배열 출력
    for (int i=0; i<N; i++) {
        printf("\nPrint Matrix row %d : ", i+1);
        for (int j=0; j<N; j++) {
            print_Array(*matrix, i, j, N);
        }
    }

    return 0;
}