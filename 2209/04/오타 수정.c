#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a;
    char b[80], c[80];
    for(int i=0; i<n; i++) {
        scanf("%d %s", &a, b);
        for(int j=0; j<a-1; j++)
            c[j] = b[j];
        for(int j=a; j<80; j++)
            c[j-1] = b[j];
        printf("%s\n", c);
    }

    return 0;
}