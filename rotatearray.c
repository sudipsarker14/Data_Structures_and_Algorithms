#include <stdio.h>
#include <stdlib.h>

int isSorted = 0;
int inputarr(int arr[], int n){

    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
int printarray(int arr[], int n){

    for(int i =0; i<n; i++){
        printf("%d\t", arr[i]);
    } printf("\n");
}
void bubblesort(int arr[], int n){

int temp;

    for(int i = 0; i<n-1; i++){
        printf("Number of working passes is %d\n", i+1);
        int isSorted = 1;
        for(int j = 0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
           }

    }if(isSorted){
     return;
    }
  }
}

void rotateArray(int arr[], int n, int pick) {
    // Create a temporary array to hold rotated elements
    int temp[n];

    // Copy elements to the temporary array
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // Rotate the elements in the original array
    for (int i = 0; i < n; i++) {
        arr[(i + pick) % n] = temp[i];
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int pick = 3;
    int arr[n];
    inputarr(arr, n);
    printarray(arr, n);
    bubblesort(arr,n);
    printf("After sorting\n");
    printarray(arr,n);
    rotateArray(arr, n, pick);
    printarray(arr, n);
    return 0;
}
