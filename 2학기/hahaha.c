/*
Lab 01.2
author : 22212126 Seo-eunseol
date : 20220302
Statistical analysis of input data
*/

#include <stdio.h>

void input_data(int data_array[], int num_data);
void get_statistics(int data_array[], int num_data, int& min, int& max, double& avg);

int main(void) {

    int num_data  = 10;
    int arr[10];
    int f_min, f_max;
    double f_avg;

    input_data(arr, num_data); // arr에 입력받은 데이터 저장 
    get_statistics(arr, num_data, f_min, f_max, f_avg); // arr에 저장된 데이터의 최소, 최대, 평균 구함
    //int& min = f_min

    printf("min = %d, max = %d, avg = %.6f", f_min, f_max, f_avg);

    return 0;
} 

void input_data(int data_array[10], int num_data) {

    printf("input 10 integer data : ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &data_array[0], &data_array[1], &data_array[2], &data_array[3], &data_array[4], &data_array[5], &data_array[6], &data_array[7], &data_array[8], &data_array[9]);

    printf("input_data = ");

    for (int i = 0; i < num_data; i++) {
        printf("%d ", data_array[i]);
    }

    printf("\n");
}

void get_statistics(int data_array[], int num_data, int& min, int& max, double& avg) {

    double total = 0.0;

    for (int i = 0; i < num_data; i++) {
        total += data_array[i];

        avg = total / (double)num_data; // double 자료형으로 계산
    }

    for (int i = 0; i < num_data; i++) { // 오름차순 정렬
        int min_index = i;
        int temp;

        for (int j = i; j < num_data; j++) {
            if (data_array[min_index] > data_array[j]) {
                min_index = j;
            }
        }

        temp = data_array[i];
        data_array[i] = data_array[min_index];
        data_array[min_index] = temp;
    }

    min = data_array[0]; // 최솟값
    max = data_array[9]; // 최댓값
}