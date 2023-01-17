#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void to_upper(char arr[]) {
    for(int i=0; i<50; i++) {
        if (arr[i] >= 97 && arr[i] <= 122) {
            arr[i] -= 32;
        }
    }
}

int main(void) {

    // 배열 생성하고 입력.
    char arr[50];
    char c;
    for(int i=0; i<50; i++) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        arr[i] = c;
    }

    // 함수 이용해서 소문자를 대문자로.
    to_upper(arr);

    // 배열 출력.
    printf("%s", arr);

    return 0;
}