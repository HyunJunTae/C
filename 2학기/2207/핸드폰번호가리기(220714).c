#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h> //// strlen가 포함된 헤더 파일

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
///////////////// const는 변하지 않는다는 뜻인듯. const로 변수를 만들면 그 변수는 변경할 수 없다? 라는 뜻인듯.
// char* solution(const char* phone_number) {
//     // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

//     char* answer;
//     answer = (char*)malloc(20 * sizeof(char));

//     int i = 0;
//     do {
//         answer[i] = phone_number[i];

//         i = i + 1;

//     }while(phone_number[i] != '\n');

//     return answer;
// }

// int main(void) {

//     char* phone_number;
//     phone_number = "01012345678";

//     printf("%s", solution(phone_number));

//     return 0;
    
// }





// int main(void) {

//     char* s1;
//     s1 = "01012345678";

//     printf("%s", s1);

//     return 0;
// }










///////////////// const는 변하지 않는다는 뜻인듯. const로 변수를 만들면 그 변수는 변경할 수 없다? 라는 뜻인듯.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.

    char* answer;
    answer = (char*)malloc(strlen(phone_number) * sizeof(char));

    for (int i=0; i<strlen(phone_number)-4;i++) {
        answer[i] = '*';
    }

    for (int i=strlen(phone_number)-4;i<strlen(phone_number);i++) {
        answer[i] = phone_number[i];
    }

    return answer;
}






// 다른 사람 풀이들

char* solution1(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * strlen(phone_number) + 1);
    char* star = "****************";

    strcpy(answer, phone_number);
    strncpy(answer, star, strlen(phone_number) - 4);

    return answer;
}
////////////////////// strcpy(복사 받을 대상의 시작 주소, 복사할 대상의 시작 주소) : 문자열 전체 복사
////////////////////// strncpy(복사 받을 대상의 시작 주소, 복사할 대상의 시작 주소, 복사할 문자의 개수) : 문자열 일정 길이만큼 복사


char* solution2(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1);


    strcpy(answer, phone_number);
    for(int i = 0; i < strlen(phone_number)-4; i++)
        answer[i] = '*';

    return answer;
}








int main(void) {

    char* phone_number;
    phone_number = "01012345678";

    printf("%s\n", solution1(phone_number));

    return 0;
    
}










