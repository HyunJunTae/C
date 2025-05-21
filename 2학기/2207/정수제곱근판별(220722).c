#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {

    for (int i=0; i<=n; i++) {
        if (i*i == n) {
            return (i+1)*(i+1);
        }
    }
    return -1;
}


int main(void) {

    int n;

    printf("n : ");
    scanf("%d", &n);

    printf("%d", solution(n));

    return 0;
}