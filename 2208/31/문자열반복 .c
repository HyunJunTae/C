#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int t;
    scanf("%d", &t);    

    int r;
    char *k;
    k = (char*)malloc(20*sizeof(char));
    for (int p=0; p<t; p++) {
        scanf("%d", &r);
        scanf("%s", k);

        for(int i=0; i<strlen(k); i++) {
            for(int j=0; j<r; j++) {
                printf("%c", k[i]);
            }
        }
        printf("\n");
    }
    free(k);
    return 0;
}




// int main()
// {
// 	int t, r, i, j;
// 	char s[21];
	
// 	scanf("%d", &t);

// 	while(t--) {
// 		scanf("%d %s", &r, s);
// 		for(i=0; s[i]!=0; i++) 
// 			for(j=0; j<r; j++)
// 				printf("%c", s[i]);
// 		printf("\n");
// 	}
// }