#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for(int i=0; i<arr_len; i++) {
        answer = answer + arr[i];
    }
    return answer / arr_len;
}

int main(void) {
    int arr[4] = {1,2,3,4};

    printf("%f", solution(arr, sizeof(arr)/sizeof(int)));   // sizeof(arr) 하면 배열의 바이트 크기가 나옴. 정수형 배열이고 4개 있으니까 16이 나옴.
                                                            // sizeof(int) (=4)로 나눠주면 4가 나옴. 배열 원소 개수.

    return 0;
}   