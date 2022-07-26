#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

float solution(int* arr, int col_index, int n) {

    int result = 0;

    for (int i=0; i<n; i++) {
        result += *(arr + col_index + n*i);
    }

    return result/3.0;
}



int main(void) {
    // 몇 자리 배열로 할지 n입력
    int n;
    printf("N : ");
    scanf("%d", &n);

    // 배열 생성 및 입력
    int arr[n][n];
    int num;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &num);
            arr[i][j] = num;
        }
    }

    // column별로 solution 사용.
    for (int i=0; i<n; i++) {
        printf("%.2f ", solution(*arr, i, n));
    }

    return 0;
}