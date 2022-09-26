#include <stdio.h>

int main(void) {
    int a, b, c, d, e;

    for (int i=0; i<3; i++) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        e = a + b + c + d;

        char k;
        if (e == 0)
            k = 'D';
        else if (e == 3)
            k = 'A';
        else if (e == 2)
            k = 'B';
        else if (e == 1)
            k = 'C';
        else if (e == 4)
            k = 'E';
        
        printf("%c\n", k);
    }

    return 0;
}