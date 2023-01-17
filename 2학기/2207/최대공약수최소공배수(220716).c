#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// 배열을 return하는건 불가능. 포인터 형태로만 넘길 수 있다.
int* solution(int n, int m) {

    static int answer[2];

    // n이 더 작게, m이 더 크게 만들기.
    if (n > m) {
        int t = n;
        n = m;
        m = t;
    }

    // 최대공약수
    for (int i=m;i>0;i--) {
        if (n%i == 0 && m%i == 0) {
            answer[0] = i;
            break;
        }
    }

    // 최소공배수
    int a = m;
    while (true) {
        if (a % n == 0) {
            answer[1] = a;
            break;
        }
        a += m;
    }

    return answer;
}
// warning: function returns address of local variable
// 함수 내의 지역변수를 return할 때 생기는 오류. 지역변수에서는 언제든 메모리가 사라질 우려가 있기 때문.
// 해당 지역변수를 static으로 선언하거나, 전역변수로 바꿔주면 됨.
// static : 정적변수. 함수 끝나고 그 함수를 다시 호출하거나 해도 그 변수의 값이 그대로 남아있음. 


int main(void) {
    int n = 8;
    int m = 12;

    int* result;
    result = solution(n,m);

    // for (int i=0;i<sizeof(result)/sizeof(int);i++) {
    //     printf("%d ", result[i]);
    // }

    for (int i=0;i<2;i++) {
        printf("%d ", result[i]);
    }

    printf("\n%d\n", sizeof(result)/sizeof(int));   // 이거 왜 1로 나오지? 포인터라서? 
                                                    //맞네. 포인터가 가르키는, 참조하는 곳에 할당된 메모리를 반환하는게 아님.
    

    return 0;
}