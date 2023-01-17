#include <stdio.h>

int main(void) {
    
    // 실행할 횟수 t 입력
    int t;
    scanf("%d", &t);

    float n;
    char k;
    for (int i=1; i<=t; i++) {

        scanf("%f", &n);

        while (1) {
            scanf("%c", &k);

            if (k == '@'){
                n = n * 3;
            }
            else if (k == '%') {
                n = n + 5;
            }
            else if (k == '#') {
                n = n - 7;
            }
            else if (k == '\n') {
                break;  
            }

        }
        printf("%.2f\n", n);
    }



    return 0;
}




// main(){
// 	int n;
// 	float a;
// 	char s;
// 	scanf("%d",&n);
// 	while(n--){scanf("%f",&a);
// 		while(1){s=getchar();
// 			if(s=='\n'){printf("%.2f\n",a);break;}
// 			if(s=='@')a*=3;
// 			if(s=='%')a+=5;
// 			if(s=='#')a-=7;}}}