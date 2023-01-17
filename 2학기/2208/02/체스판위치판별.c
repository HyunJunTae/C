#include <stdio.h>

void checkWB(char col, int row, char *answer) {
    
    int a = 0;
    int b = 0;

    if (col%2 == 1) {
        a = 1;
    }
    if (row%2 == 1) {
        b = 1;
    }

    if (a == b) {
        *answer = 'B';
    }
    else {
        *answer = 'W';
    }
    printf("%d %d\n", a, b);
    return;
}

int main(void) {

    char col;
    int row;
    scanf("%c%d", &col, &row);

    char answer;

    checkWB(col, row, &answer);

    printf("%c", answer);

    return 0;
}