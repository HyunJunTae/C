#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void dec2oct(int* a,int* b,int* c,int* d,int num) {

    *d = num % 8;
    *c = num / 8 % 8;
    *b = num / 8 / 8 % 8;
    *a = num / 8 / 8 / 8 % 8;
}


void dec2hex(char* e,char* f,char* g,int num) {
    // 아스키코드 48 : 0      65 : A
    int a, b, c;
    a = num % 16;
    b = num / 16 % 16;
    c = num / 16 / 16 % 16;

    *e = '0';
    *f = '0';
    *g = '0';

    if (c < 10) {
        *e = *e + c;
    }
    else {
        *e = *e + 17 + (c-10);
    }

    if (b < 10) {
        *f = *f + b;
    }
    else {
        *f = *f + 17 + (b-10);
    }

    if (a < 10) {
        *g = *g + a;
    }
    else {
        *g = *g + 17 + (a-10);
    }
    

    // char* abc = "aaaaaaaaaABCDEF";
    // for (int i=10;i<16;i++) {
    //     if (*g == i) {
    //         *g = abc[i];
    //     }
    //     if (*f == i) {
    //         *f = abc[i];
    //     }
    //     if (*e == i) {
    //         *e = abc[i];
    //     }
    // }


}


int main(void) {

    int num;
    int a, b, c, d;
    char e, f, g;

    printf("Input num : ");
    scanf("%d", &num);

    printf("%.4o\n", num);
    dec2oct(&a, &b, &c, &d, num);
    printf("%d%d%d%d\n", a, b, c, d);
    printf("%.3X\n", num);
    dec2hex(&e, &f, &g, num);
    printf("%c%c%c\n", e, f, g);

    return 0;
}