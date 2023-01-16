#include <stdio.h>
#include <stdlib.h>

int quickSort(int arr[], int first, int last){

    int i, j, pivot, temp;

    if(first<last){
        pivot  = first;
        i = first;
        j = last;
        while(i<j){
            while(arr[i]<= arr[pivot]&& i<last)
                i++;
            while(arr[j]>arr[pivot])
                j--;
            if(i<j){
                temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(arr, first, j-1);
        quickSort(arr, j+1, last);
    }

}

int inputarr(int arr[], int n){
for(int i = 0; i<n; i++){
scanf("%d", &arr[i]);
}
}
int printarr(int arr[], int n){
for(int i = 0; i<n; i++){
printf("%d\t", arr[i]);
}
}

  int main(){

     int arr[100];
     int n = 5;

     inputarr(arr, n);
     quickSort(arr, 0, n-1);
     printarr(arr, n);

    return 0;
}
