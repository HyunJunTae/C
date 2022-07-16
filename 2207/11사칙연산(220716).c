#include <stdio.h>

// 전역변수 a, b, 함수의 지역변수 *c, *d, 메인의 지역변수 a, b만 가지고 만들기.
int a, b;


void printResult(int* c, int* d) {

    printf("a + b = %d\n", a);
    printf("a - b = %d\n", b);
    printf("a * b = %d\n", *c);
    printf("a / b = %d\n", *d);

    return;
}


void fourmath (int* c, int* d) {

    a = *c + *d;
    b = *c - *d;
    *c = *c * *d;
    *d = *c / *d / *d;

    printResult(c, d);

    return;
}



int main(void) {

    int a, b;

    printf("Input two numbers : ");
    scanf("%d %d", &a, &b);

    fourmath(&a, &b);

    return 0;
}