#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char* solution(const char* s) {

    // for 반복문
    char* answer = (char*)malloc(strlen(s) * sizeof(char));
    int i; // 문자열 내에서 몇 번째 자리인지
    int count = 0; // 한 단어 내에서 몇 번째 자리인지
    for (i=0; i<strlen(s); i++) {
        if (s[i] == ' ') { // 만약 빈칸이면 count를 0으로, i는 한 칸 더가기.
            answer[i] = s[i];
            count = 0;
            continue;
        }
        if (count%2==0 && s[i]>= 97 && s[i]<=122) { // 만약 단어에서 짝수인덱스이면 대문자로
            answer[i] = s[i] - 32;
        }
        else if (count%2==1 && s[i]>= 65 && s[i]<=90) { // 만약 단어에서 홀수인덱스이면 소문자로
            answer[i] = s[i] + 32;
        }
        else { // 이미 맞게 되어있으면 그대로 가져가기
            answer[i] = s[i];
        }
        count += 1;
    }





    // while 반복문
    // char* answer = (char*)malloc(strlen(s) * sizeof(char));
    // int i = 0; // 문자열 내에서 몇 번째 자리인지
    // int count = 0; // 한 단어 내에서 몇 번째 자리인지
    // while (s[i] != '\n') {
    //     if (s[i] == ' ') { // 만약 빈칸이면 count를 0으로, i는 한 칸 더가기.
    //         answer[i] = s[i];
    //         count = 0;
    //         i += 1;
    //         continue;
    //     }
    //     if (count%2==0 && s[i]>= 97 && s[i]<=122) { // 만약 단어에서 짝수인덱스이면 대문자로
    //         answer[i] = s[i] - 32;
    //     }
    //     else if (count%2==1 && s[i]>= 65 && s[i]<=90) { // 만약 단어에서 홀수인덱스이면 소문자로
    //         answer[i] = s[i] + 32;
    //     }
    //     else { // 이미 맞게 되어있으면 그대로 가져가기
    //         answer[i] = s[i];
    //     }
    //     i += 1;
    //     count += 1;
    // }
    
    return answer;
}

int main(void) {

    const char* s = "Hello, World!   ";
    char* p = solution(s);
    
    printf("%s", p);
    
    return 0;
}