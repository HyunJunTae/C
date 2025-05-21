#include <stdio.h>

int main(void) {
    
    // 실행할 횟수 t 입력
    int t;
    scanf("%d", &t);

    float n;
    char k;
    for (int i=1; i<=t; i++) {

        scanf("%f", &n);

        for (int j=0; j<3; j++) {
            scanf("%c", &k);
            printf("%c", k);

            if (k == '@'){
                n = n * 3;
            }
            else if (k == '%') {
                n = n + 5;
            }
            else if (k == '#') {
                n = n - 7;
            }

        }
        printf("%.2f\n", n);
    }



    return 0;
}