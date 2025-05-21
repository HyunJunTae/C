#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution() {
    char* h = "Hell";
    return h;
}

char* solution1() {
    static char onggibot[10] = {0};
    onggibot[1] = 99;
    onggibot[5] = 81;
    return onggibot;

}

char* solution2() {
    char* abc = "abcdefghij";
    char* ongwe;
    ongwe = (char*)malloc(10 * sizeof(char));
    for(int i=0;i<10;i++) {
        ongwe[i] = abc[i];
    }
    return ongwe;
}



int main(void) {

    char* a = "Hello!";
    printf("%s\n", a);

    char* b;
    b = solution();
    printf("%s\n", b);

    char* c;
    c = solution1();
    for (int i=0;i<10;i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    char* d = solution2();
    for(int i=0;i<10;i++) {
        printf("%d ", d[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++) {
        printf("%c ", d[i]);
    }
    printf("\n");

    return 0;
}