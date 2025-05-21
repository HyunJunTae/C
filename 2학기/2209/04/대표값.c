#include <stdio.h>

int main(void) {

    int n, num=0, i, j=0, o=0;
    int count[20] = {0,};

    for (i=0; i<10; i++) {
        scanf("%d", &n);
        num += n;
        
        while(count[j*2] != 0) {
            if (count[j*2] == n) {
                count[j*2 + 1] += 1;
                j = 0;
                o = 1;
                break;
            }
            j++;
        }
        if (o == 0) {
            count[j*2] = n;
            count[j*2 + 1] += 1;
        }

        j = 0;
        o = 0;
    }

    int max = 0;
    int point;
    for(i=0; i<10; i++) {
        if (max < count[i*2 + 1]) {
            max = count[i*2 + 1];
            point = count[i*2];
        }
        if (count[i*2]== 0)
            break;
    }

    printf("\n%d\n%d", num/10, point);

    return 0;
}





// int main(void)
// {
// 	int count[101] = { 0 };
// 	int N, sum = 0, max = 0;
// 	int i;

// 	for (i = 0; i < 10; i++)
// 	{
// 		scanf("%d", &N);
// 		sum += N;
// 		count[N / 10]++;
// 	}

// 	printf("%d\n", sum / 10);
// 	for (i = 0; i < 101; i++)
// 	{
// 		if (count[i] > count[max])
// 			max = i;
// 	}
// 	printf("%d\n", max*10);

// }