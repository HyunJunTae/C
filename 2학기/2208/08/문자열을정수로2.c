#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    
    int op = 1;
    int answer = 0;
    if (s[0] == '-' || s[0] == '+') { // 부호 붙은 경우
        if (s[0] == '-') op = -1; // 음수면 -1로.
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



int solution1(const char* s) {
    int answer = atoi(s);
    return answer;
}



int main(void) {

    const char* s;
    s = "-123456";

    printf("%d", solution(s));
    
    return 0;
}