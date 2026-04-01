#include <stdio.h>

int sum(int arr[], int len){
    int result = 0;

    for(int i = 0; i < len; i++){
        result += arr[i];
    }

    return result;
}

double average(int arr[], int len){
    return (double)sum(arr, len) / len;
}

int max(int arr[], int len){
    int result = arr[0];

    for(int i = 1; i < len; i++){
        if(arr[i] > result){
            result = arr[i];
        }
    }

    return result;
}

int main(){
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
