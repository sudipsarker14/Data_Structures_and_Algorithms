#include <stdio.h>

void inputarr(int arr[], int n){

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}

void printarr(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }printf("\n");
    }

int partition(int arr[], int low, int high){
    int temp, pivot, i, j;
    pivot = arr[low];
    i = low+1;
    j = high;

    do{
    while(arr[i]<=pivot){
        i++;
    }
    while (arr[j]>pivot){
        j--;
    }
    if(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    }while(i<j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;

}

void quicksort(int arr[], int low, int high){
    
    int partitionIndex;
    if(low<high){
    partitionIndex = partition(arr, low, high);
    quicksort(arr, low, partitionIndex-1);
    quicksort(arr, partitionIndex+1, high);
    }
}

int main(){

    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    inputarr(arr, n);
    
    printf("Array before sorting\t");
    printarr(arr, n);
    
    quicksort(arr, 0, n-1);
    printf("Array after sorting\t");
    printarr(arr, n);
    
    return 0;
}
