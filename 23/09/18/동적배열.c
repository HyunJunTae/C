#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a = 10;
    int *b;
    b = &a;
    printf("%d %d\n", a, *b);

    // a 값 변화
    a = 20;
    printf("%d %d\n", a, *b);
    
    // c, d 동적배열 생성.
    int *c = malloc(sizeof(int));
    int *d;
    d = (int*)malloc(sizeof(int));

    // c는 a의 주소값 따라감. *d를 이용해서 d의 값에 a의 값 저장.
    c = &a;
    *d = a;

    printf("%d %d %d %d\n", a, *b, *c, *d);

    // a 값 변화.
    a = 30;
    printf("%d %d %d %d\n", a, *b, *c, *d);

    free(c);
    free(d);
    return 0;
}