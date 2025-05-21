#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int num = a * b * c;
    int n;
    int count[10] = { 0, };

    while(1) {
        n = num%10;
        
        for (int i=0; i<10; i++) {
            if (n==i) {
                count[i] += 1;
            }
        }
        num /= 10;
        if (num == 0) {
            break;
        }
    }
    for(int i=0; i<10; i++) {
        printf("%d\n", count[i]);
    }
    return 0;
}