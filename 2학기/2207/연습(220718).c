#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void) {

    char* a;
    a = "Hello";
    printf("%s\n", a);


    char* b;
    *b = 123 % 10;
    printf("%c\n", b);
    printf("%c\n", *b);
    printf("%d\n", b);
    printf("%d\n", *b);


    return 0;
}