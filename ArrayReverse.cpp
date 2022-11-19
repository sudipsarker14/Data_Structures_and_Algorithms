#include <bits/stdc++.h>

using namespace std;

int n;

int traverse(int  x[]){
    for(int i =0; i<n; i++){
        scanf("%d", &x[i]);
    }
}
int creation (int x[]){
    for(int i=n-1; i>=0; i--){
        printf("%d\t", x[i]);
    }
}
int main()
{
    printf("Enter the array value = ");
    scanf("%d", &n);
    int arr[n];
    traverse(arr);
    creation(arr);
    return 0;
}
