#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void caesar(char* alphabet, int key) {

    if (*alphabet+key >= 65 && *alphabet+key <= 90) {
        *alphabet = *alphabet + key;
        return;
    }
    if (*alphabet+key < 65) {
        *alphabet = *alphabet + 26 + key;
        return;
    }
    if (*alphabet+key > 90) {
        *alphabet = *alphabet - 26 + key;
        return;
    }
    
}



int main(void) {

    // 키 선언, 입력
    int key;
    printf("Key : ");
    scanf("%d", &key);

    // 알파벳들 선언, 입력받기
    int length = 1;
    char* alphabets;
    alphabets = (char*)malloc(length * sizeof(char));
    printf("Alphabets : ");
    scanf("%s", alphabets);

    //카이사르 알고리즘으로 변환시키고 출력.
    for (int i=0; i<strlen(alphabets); i++) {
        caesar(&alphabets[i], key);
    }
    printf("%s", alphabets);
    
    free(alphabets);
    return 0;
}