#include <stdio.h>


void increaseNumber()
{
    int num1 = 0;    // 변수 선언 및 값 초기화

    printf("%d\n", num1);    // 변수 num1의 값을 출력

    num1++;    // 변수의 값을 1씩 증가
}

void increaseNumber1()
{
    static int num1 = 0;     // 정적 변수 선언 및 값 초기화

    printf("%d\n", num1);    // 정적 변수 num1의 값을 출력

    num1++;    // 정적 변수 num1의 값을 1 증가시킴
}

int main()
{
    increaseNumber1();    // 0
    increaseNumber1();    // 1
    increaseNumber1();    // 2
    increaseNumber1();    // 3: 정적 변수가 사라지지 않고 유지되므로 값이 계속 증가함

    return 0;
}

// static int num1 = 0; 은 ==프로그램이 시작될 때== 정적 변수가 생성되고 초기화된다.
// 함수가 호출되더라도 변수는 초기화되지 않고 유지된다.
