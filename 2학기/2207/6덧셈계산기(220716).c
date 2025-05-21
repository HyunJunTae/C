#include <stdio.h>

int add(int a, int b) {
    return a+b;
}



int main(void) {

    int a, b, result;

    printf("Input first integer : ");
    scanf("%d", &a);

    printf("Input second integer : ");
    scanf("%d", &b);

    result = add(a, b);
    printf("%d + %d = %d", a, b, result);

    return 0;
}