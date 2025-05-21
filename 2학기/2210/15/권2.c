// /이름 : 권예우너
// 학번 : 22212090
// 6-2/


#include <stdio.h>
    int main()
    {
        int line = 0;
        int num = 0, i = 0, space = 0;
        printf("int : ");
        scanf("%d", &line);

        for (i = 1; i <= line; i++) //입력한 line번 반복
        {
            //i번 라인에 공백은 (line-i)개 출력
            for (space = 0; space < (line - i); space++){
                putchar(' ');
            }
            //1부터 i까지 증가하면서 출력
            for (num = 1; num <= (i*2 - 1); num++){
                printf("%d", num);
            }
            //i-1번부터 1까지 감소하면서 출력
            // for (num = i; num > 0; num--){
            //     printf("%d", num+2);
            // }
            putchar('\n');//개행 출력
        }

        return 0;
    }

// 바뀐 부분 
// - 21번 줄 num++ -> num--
// 증가하면서 출력 부분만 사용해도 충분. 감소출력 부분 삭제.