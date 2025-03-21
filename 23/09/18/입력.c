#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int a;
    printf("Input your number : ");
    scanf("%d", &a);
    
    printf("%d\n", a);



    char b;
    b = 'b';
    printf("%c\n", b);


    // 얘 왜 작동안함??
    char c;
    printf("Input your char : ");
    // 위에서 scanf 한 번 쓰고 엔터 쳐서 입력버퍼에 엔터가 남아있기 때문.
    // 화이트 스페이스 한 칸 만들어줘야함. -> 두 번째 scanf에서 %c 앞에 스페이스 한 칸.
    scanf(" %c", &c);
    printf("%c\n", c);

    return 0;
}