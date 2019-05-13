#include<stdio.h>
//
//每次都找到一个最大的数放到数组最后一位
//
int findMaxPos(int arr[], int n) {
    int max = arr[0];
    int pos = 0;
    int i;
    for (i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            pos = i;
        }
    }
    return pos;
}

void selectionSort(int arr[], int n){
    int pos;
    int temp;
    while(n > 1){
        pos = findMaxPos(arr, n);
        temp = arr[pos];
        arr[pos] = arr[n-1];
        arr[n-1] = temp;
        n--;
    }
}

int main(){
    int arr[] = {5, 8, 9, 7, 6, 1, 2, 4, 3};
    selectionSort(arr, 9);
    int i;
    for(i=0; i<9; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
