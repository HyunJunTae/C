#include <stdio.h>



int main(void) {

    int n;
    char k;
    scanf("%c", &k);
    printf("%d ", k+2);
    
    for (int i=0; i<3; i++) {
        scanf("%d", &n);
        printf("%d ", n+1);
    }

    return 0;
}

// 이런식으로 문자형입력, 정수형반복입력 에서도 한 줄에 다 입력해도 다 됨.
// 첫 번째 입력 k에는 문자로, 그 뒤 2, 3, 4번째 입력에서는 정수로 잘 처리됨.