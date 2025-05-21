#include <stdio.h>

int main(void) {
    int a, c;
    char b;

    scanf("%d %c %d", &a, &b, &c);
    if (b == '+')
        printf("%d", a+c);
    else
        printf("%d", a*c);

    return 0;
}