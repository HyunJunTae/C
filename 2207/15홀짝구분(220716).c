#include <stdio.h>


int main(void) {

    int num;

    printf("Input : ");
    scanf("%d", &num);

    (num%2 == 0) ? printf("%d is even number", num) : printf("%d is odd number", num);

    return 0;
}