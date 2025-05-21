#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main(void) {

    // int i = 0;
    // while(1) {
    //     printf("%d", i);
    //     i++;
    // }
    // // 잘됨.

    // char* a = "Hello";
    // while(1) {
    //     printf("%s", a);
    // }
    // // 얘도 잘됨.

    // char* a = "Hello";
    // int i;
    // for(i=0; i<strlen(a); i++) {
    //     printf("%c  ", a[i]);
    // }
    // // 이거도 잘되는데;;;;;;;;

    // char* a;
    // scanf("%s", a);
    // printf("%s", a);
    // int i;
    // for(i=0; i<strlen(a); i++) {
    //     printf("%c  ", a[i]);
    // }
    // 입력을 해서 하면 안됨.
    // 포인터는 읽기 전용. 쓰기는 안된다..?

    char* a;
    a = (char*)malloc(10 * sizeof(char));
    scanf("%s", a);
    printf("%s\n", a);
    int i;
    for(i=0; i<strlen(a); i++) {
        printf("%c  ", a[i]);
    }
    // Holy shit.

    ////////////////////////////////////////////////////////////////////////////////
    // 문자열 포인터는 읽기 전용이고 쓰기는 안된다.
    // 그래서 scanf로 써넣을 수 없다..!!!!
    // malloc 등의 함수로 '메모리'를 할당한 뒤 문자열을 입력하고 써야 한다...!!!!!!!
    // 근데 왜 카이사르암호 3에서는 ?가 떴지
}