#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int length;
int *new_arr;


void solution(int arr[]) {

    int min = arr[0];
    int num;

    for(int i=0; i<length; i++) {
        if (arr[i] < min) {
            min = arr[i];
            num = i;
        }
    }

    for (int i=0; i<num; i++) {
        new_arr[i] = arr[i];
    }
    for (int i=num+1; i<length; i++) {
        new_arr[i-1] = arr[i];
    }

}


int main(void) {

    int arr[6] = {3,4,5,1,2,6};
    length = sizeof(arr)/sizeof(int);
    new_arr = (int *)malloc((length-1) * sizeof(int));
    solution(arr);

    for(int i=0; i<length-1; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}