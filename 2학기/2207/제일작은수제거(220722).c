#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int arr[], int length) {

    static int re_arr[length-1];
    // 지역변수 return하려면 오류 발생. static 붙여주거나 전역변수로.
    // static 붙이니까 storage size of 're_arr' isn't constant 이런 오류 뜸. length-1자리에 5 넣으면 오류 안뜸.
    // static은 정적 변수로 만든다는 뜻.

    // int a = length-1;
    // static int re_arr[a];
    // 이렇게 해도 오류뜸. 변수를 넣으면 오류가 뜨나봄.


    
    int min = arr[0];
    int num;

    for(int i=0; i<length; i++) {
        if (arr[i] < min) {
            min = arr[i];
            num = i;
        }
    }

    for (int i=0; i<num; i++) {
        re_arr[i] = arr[i];
    }
    for (int i=num+1; i<length; i++) {
        re_arr[i-1] = arr[i];
    }
    return re_arr;
}

// fucntion 안에서는 배열에 sizeof 사용 불가. fucntion으로 넘기면서, 배열이 아니라 배열의 포인터로 넘어가기 때문. 배열의 첫 자리를 가리키는 포인터로.
// 할려면 함수로 가기 전에 main에서 길이까지 가져가야함.



int main(void) {

    int arr[6] = {4,5,6,1,2,3};
    // int re_arr[(sizeof(arr)/sizeof(int))-1] = solution(arr);
    int *re_arr = solution(arr, (sizeof(arr)/sizeof(int)));

    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d ", re_arr[i]);
    }

    return 0;
}
