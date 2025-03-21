#include <stdio.h>
#include <stdlib.h>


int main(void) {

    char *s1 = "Hello";
    printf("%s\n", s1);

    //// 이렇게 하면 안됨. 아마 주소만 잡아주고 메모리는 잡아주지 않아서인듯?
    // char *s2;
    // printf("Input : ");
    // scanf("%s\n", s2);
    // printf("s2 : %s", s2);

    // 이렇게 메모리를 할당해줘야 함.
    char s3[10];
    printf("Input : ");
    scanf("%s", s3);
    printf("s3 : %s\n", s3);

    char *s4;
    s4 = (char*)malloc(sizeof(char) * 10);
    printf("Input : ");
    scanf("%s", s4);
    printf("s4 : %s\n", s4);

    return 0;
}