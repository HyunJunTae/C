#include <stdio.h>

int* calc(char op, int* no1, int* no2) {

    if (op == '+') {
        *no1 += *no2;
        return no1;
        
    }
    else if (op == '-') {
        *no1 -= *no2;
        return no1;
    }
    else if (op == '*') {
        *no1 *= *no2;
        return no1;
    }
    else if (op == '/') {
        *no1 /= *no2;
        return no1;
    }   
}


int main(void) {

    int no1 = 100; 
    int no2;
    char op;
    printf("Input operation : ");
    scanf("%c", &op);
    printf("Input integer : ");
    scanf("%d", &no2);

    int *p;
    p = calc(op, &no1, &no2);

    printf("Result : %d", *p);

    return 0;
}