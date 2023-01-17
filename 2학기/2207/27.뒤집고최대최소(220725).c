#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void) {

    // 배열 생성하고 입력.
    int arr[10];
    int num;
    printf("Input (10 numbers) : ");
    for (int i=0; i<10; i++) {
        scanf("%d", &num);
        arr[i] = num;
    }

    // 배열 최대 최소 찾기.
    int max = arr[0];
    int min = arr[0];
    for (int i=0; i<10; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        else if (min > arr[i]) {
            min = arr[i];
        }
    }

    // 배열 뒤집기.
    int temp;
    for (int i=0; i<5; i++) {
        temp = arr[i];
        arr[i] = arr[9-i];
        arr[9-i] = temp;
    }

    //배열 최대 최소 출력
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nMax : %d, Min : %d\n", max, min);

    return 0;
}