#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int num) {
    int answer = 0;

    while(answer <= 500 && num != 1) {
        if ( num%2 == 0) {
            num /= 2;
        }
        else if (num%2 == 1) {
            num = num*3 + 1;
        }
        answer += 1;
    }

    if (answer > 500) {
        answer = -1;
    }

    return answer;
}


int solution1(int num) {

    for (int i=0; i<500; i++) {
        if ( num%2 == 0) {
            num /= 2;
        }
        else if (num%2 == 1) {
            num = num*3 + 1;
        }
        if (num == 1) {
            return i+1;
        }
    }

    return -1;
    }


int solution2(int num) 
{
   long long answer = num;

    for(int i=0; i<500; i++)
    {
        if (answer == 1)
            return i;

        answer = (answer % 2 == 0) ? (answer / 2) : (3 * answer + 1); // 조건연산자 사용.
    }

   return -1;
}






int main(void) {
    int num = 6;

    printf("%d", solution1(num));

    return 0;
}