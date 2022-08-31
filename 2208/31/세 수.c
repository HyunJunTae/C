#include <stdio.h>

int main(void) {

    int a[3];
    for (int i=0; i<3; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    int min_n = 0;
    int max = a[0];
    int max_n = 0;
    for (int i=1; i<=2; i++) {
        if (a[i] < min) {
            min = a[i];
            min_n = i;
        }
        if (a[i] > max) {
            max = a[i];
            max_n = i;
        }
    }

    a[min_n] = 0;
    a[max_n] = 0;
    for(int i=0; i<3; i++) {
        if (a[i] != 0) {
            printf("%d", a[i]);
            break;
        }
    }
}

// int main(void) {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);

//     printf("%d", a>b ? (c>b ? (c>a ? a : c) : b) : (c>a ? (c>b ? b : c) : a));

//     return 0;
// }



