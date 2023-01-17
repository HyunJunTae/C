#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // 배열 선언
    int* arr;
    arr = (int*)malloc(3 * sizeof(int));
    int N = 3;

    // 반복문으로 정수 입력받고 배열에 넣기. 칸 없으면 늘리기.
    int num;
    int count = 0;
    while(num != -1) {

        // 칸 없으면 늘리기
        if (count == N) {
            N += 2;
            realloc(arr, N * sizeof(int));
        }

        // 입력받고 배열에 넣기. -1이면 break
        scanf("%d", &num);
        if (num == -1) {
            break;
        }
        arr[count] = num;
        count += 1;
    }
    
    printf("N : %d, count : %d\n", N, count);
    // 배열 출력
    printf("Array : ");
    for (int i=0; i<count; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}