#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void) {

    int num;

    printf("Input : ");
    scanf("%d", &num);

    int star = 1;

    while (num > 0) {

        for(int i=0; i<num; i++) {
            printf(" ");
        }
        for(int i=0; i<star; i++) {
            printf("*");
        }
        printf("\n");
        num -= 1;
        star += 2;
    }

    return 0;
}