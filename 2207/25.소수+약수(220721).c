#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int isDivisor(int m, int n) {
    if (n%m == 0) {
        return 1;
    }
    return 0;
}


int isPrime(int m) {
    for (int i=2; i<m; i++) {
        if (m%i == 0) {
            return 0;
        }
    }
    return 1;
}



int main(void) {

    int num;

    printf("Input : ");
    scanf("%d", &num);

    for (int i=2; i<=num; i++) {
        if (isDivisor(i, num)==1) {
            if (isPrime(i) == 1) {
                printf("%d  ", i);
            }
        }
    }

    return 0;
}