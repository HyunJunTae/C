#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void to_upper(char arr[], int count) {
    for(int i=0; i<count; i++) {
        if (arr[i] >= 97 && arr[i] <= 122) {
            arr[i] -= 32;
        }
    }
}

int main(void) {

    // 배열 생성하고 입력.
    char arr[50];
    char c;
    int count = 0;
    for(int i=0; i<50; i++) {
        scanf("%c", &c);
        if (c == '\n') {
            break;
        }
        arr[i] = c;
        count += 1;
    }

    // 함수 이용해서 소문자를 대문자로.
    to_upper(arr, count);

    // 배열 출력.
    for (int i=0; i<count; i++) {
        printf("%c", arr[i]);
    }

    return 0;
}