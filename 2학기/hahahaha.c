#include <stdio.h>

void input_data(int data_array[], int num_data) {
    *data_array = num_data;
}

void get_statistics(int data_array[], int num_data, int &min, int &max, double &avg) {
    
    for (int i=1; i<10; i++) {
        if (data_array[i] > min)

    }

}




int main(void) {

    int num;
    int array[10];
    double avg;

    for (int i=0; i<10; i++) {
        scanf("%d", &num);
        input_data(array+i, num);
    }

    int min = array[0];
    int max = array[0];

    get_statistics(array, num, min, max, avg);


    for (int i=0; i<10; i++) {
        printf("%d ", array[i]);
    }
}



// 포인터 배열, 입력버퍼
// [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]