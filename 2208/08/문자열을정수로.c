#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* s) {
    
    int op = 1;
    int answer = 0;
    if (s[0] == '-' || s[0] == '+') { // 부호 붙은 경우
        s[0] == '-' ? op = -1 : op = 1; // 조건연산자 왜 안됨???????????
        for (int i=1; i<strlen(s); i++) {
            answer += (int)s[i] - 48;
            answer *= 10;
        }
    }
    else { // 그 외 경우
        for (int i=0; i<strlen(s); i++) {
            answer += (int)s[i] - 48;
            answer *= 10;
        }
    }
    answer /= 10;

    return op * answer;
}



int main(void) {

    const char* s;
    s = "-123456";

    printf("%d", solution(s));

    return 0;
}