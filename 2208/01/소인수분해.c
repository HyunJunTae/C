#include <stdio.h>
#include <stdlib.h>


int get (int n, int p) {
    if (n == 1) {
        return 0;
    }
    return (n/p) + get(n/p, p);
}


int main(void) {

    int n, p;
    scanf("%d %d", &n, &p);

    printf("%d", get(n, p));
}