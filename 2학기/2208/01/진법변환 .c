#include <stdio.h>
#include <stdlib.h>

int p_to_dec(int num, int p) {

    // result에 10진수로 바꾼 값 저장. temp에는 p를 거듭제곱해서 저장. 2진수면 1 2 4 8 16 이런식으로.
    int result = 0;
    int temp = 1;
    while(num != 0) {
        result += (num%10) * temp;
        num /= 10;
        temp *= p;
    }

    return result;
}


int dec_to_p(int num, int p) {

    
    // 실패한 경우. 만약 12면, 8, 4 빼면 끝이라 반복문의 곱하기 한 번이 안돼서 1100이 아니라 110 나오고 끝.
    // int result = 0;
    // int temp = p;
    // while(num > temp) {
    //     temp *= p;
    // }
    // temp /= p;
    
    // while(num != 0) {
    //     printf("%d ", temp);
    //     result = result + num/temp; // 12 2 면 1 2 4 8 에서 8하나 4하나 2없고 1하나 이런 식으로 나눠서 넣어주는거.
    //     result = result * 10;
    //     if (num >= temp) { // 하나 있으면 그만큼 빼주기
    //         num = num - temp;
    //     }
    //     temp = temp / p;
    // }

    // 아 이렇게하면 왜 안되는데요...
    // int result = 0;
    // int temp = p;
    // int count = 1;
    // while(num > temp) { // 12 2   133 10
    //     temp *= p;
    //     count = count + 1; 
    // }
    // temp /= p; // temp = 8   100
    // count = count; // count = 3   2
    
    // for (int i=0; i<count; i++) {
    //     result = result + num/temp; // 12 2 면 1 2 4 8 에서 8하나 4하나 2없고 1하나 이런 식으로 나눠서 넣어주는거.  100 10
    //     result = result * 10;
    //     if (num >= temp) { // 하나 있으면 그만큼 빼주기
    //         num = num - temp;
    //     }
    //     temp = temp / p;
    // }
    

    // 나머지를 위에거부터 구하면서 result에 더해주는데, count를 1 10 100으로 늘려가고 이걸 같이 곱하면서 더해줌.
    // 이렇게 하면서 일의자리, 십의자리, 백의자리 순으로 채워나감.
    int result = 0;
    int temp;
    int count = 1;
    while(num != 0) {
        temp = num % p;
        result = result + temp*count;

        num = num / p;
        count = count * 10;
    }

    return result;
}


int main(void) {

    int x, y, b;
    scanf("%d %d %d", &x, &y, &b);

    printf("%d + %d = %d", x, y, dec_to_p(p_to_dec(x, b) + p_to_dec(y, b), b));

    return 0;
}