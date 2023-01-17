#include <stdio.h>

int main(void) {
    int num = 0, max = 0, a, b;
    for(int i=0; i<10; i++) {
        scanf("%d %d", &a, &b);
        num = num - a + b;
        if (max < num) {
            max = num;
        }
    }
    printf("%d", max);
    return 0;
}