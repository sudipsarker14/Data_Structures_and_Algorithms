#include <bits/stdc++.h>

using namespace std;

int n, sum = 0;

int traverse(int arr[]){
    for (int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    sum = sum + arr[i];

}printf("Sum = %d", sum);
}

int main(){

printf("Enter the value = ");
scanf("%d", &n);

int arr[n];
traverse(arr);

return 0;
}
