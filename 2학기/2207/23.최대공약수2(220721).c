#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

void func_gcd(int a, int b, int* gcd) {

    int c;

    while (true) {
        c = a % b;
        if (c == 0) {
            break;
        }
        a = b;
        b = c;
    }
    *gcd = b;
}



int main(void) {

    int num1, num2;
    int *gcd;

    printf("Input first number : ");
    scanf("%d", &num1);

    printf("Input second number : ");
    scanf("%d", &num2);

    func_gcd(num1, num2, gcd);

    printf("GCD : %d", *gcd);

}