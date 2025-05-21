#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// 0 1 1 2 3 5 8 13 21
int fibonacci(int num) {
    if(num == 0) {
        return 0;
    }
    else if (num == 1) {
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}

int main(void) {

    int num;

    scanf("%d", &num);

    printf("fibo(%d) : %d", num, fibonacci(num));

    return 0;
}