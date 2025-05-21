#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void) {

    char a = 'a';
    printf("%c\n", a);

    char* b = "Hello";
    printf("%s\n", b);

    a = a + 1;
    printf("%c\n", a);

    char c = 16;
    printf("%c", c);

    char d = '5'; // 이거 = '16'하면 오류남. 10해도 오류. 9하면 밑에 +1에서 10이 아니라 :이 나옴. 아스키코드에 10이 없어서 발생하는 오류?
    printf("%c\n", d);
    printf("%c\n", d+1);

    return 0;
}