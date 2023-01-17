#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>



int main(void) {

    int a, b, num;
    int count = 0;

    printf("Enter two numbers : ");
    scanf("%d %d", &a, &b);

    while (true) {
        num = a%10 + b%10;

        if (num >= 10) {
            count += 1;
        }

        a -= a%10;
        b -= b%10;

        if (a == 0 || b == 0) {
            break;
        }
        a /= 10;
        b /= 10;
    }

    printf("%d carry operations", count);

    return 0;
}