#include <stdio.h>
#include <stdlib.h>

int inputarr(int arr[], int n){

    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
    }
}
 int binarySearch(int arr[], int n, int element){

 int mid;
 int low = 0;
 int high = n-1;

while(low<=high){
    mid = (low+high)/2;
 if(arr[mid] == element){
    return mid;
 }
 else if(arr[mid]<element){
    low = mid+1;
 }
 else
    high = mid-1;
 } return -1;
 }
int main()
{
    int n;
    printf("Enter the array Size: ");
    scanf("%d", &n);
    int arr[n];
    inputarr(arr, n);
    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);
    int a = binarySearch(arr, n, element);
    printf("Element is found at %d index\n", a);
    return 0;
}
