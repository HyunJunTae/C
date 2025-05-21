#include <stdio.h>

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

    int num;
    char a1, a2, a3;

    scanf("%d %c%c%c", &num, &a1, &a2, &a3);

    caesar(&a1, num);
    printf("%c", a1);
    caesar(&a2, num);
    printf("%c", a2);
    caesar(&a3, num);
    printf("%c", a3);

    return 0;
}