#include <stdio.h>


int main(void) {

    int a = 5;
    printf("a = %d\n", a);
    printf("&a = %d\n", &a);


    int *ptr;
    // ptr = &a; 처럼 ptr에는 주소가 들어감.
    // *ptr = 10; 처럼 *ptr에는 값이 들어감. 일반 변수에서는 a에 값이 들어감.
    ptr = &a;
    printf("*ptr = %d\n", *ptr);
    printf("ptr = %d\n", ptr);


    return 0;
}