#include <stdio.h>


int main(void) {

    int price;

    printf("Price : ");
    scanf("%d", &price);

    printf("----------output----------\n");

    printf("Month\t\t:%10d%10d\n",3, 6);
    printf("Payment\t\t:%10d%10d\n",price, (int)(price*1.05*1.05*1.05));

    printf("--------------------------\n");

    printf("Pay/month\t:%10.2f%10.2f", price/3.0, (int)(price*1.05*1.05*1.05)/6.0);

    return 0;
}

// 정수 출력할 때는 %d, 실수 출력할 때는 %f. 잘 구분하기.