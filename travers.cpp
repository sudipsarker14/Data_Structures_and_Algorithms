#include <bits/stdc++.h>
int n;

using namespace std;
int traverse(int arr[]){
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
}
int creation(int arr[]){
    for(int i= 0; i<n; i++){
    printf("%d\n", arr[i]);
}
}
int main()
{

   printf("How many Numbers: ");
   scanf("%d", &n);
   int arr[n];
   printf("Enter %d numbers: ", n);
   traverse(arr);
   printf("The %d numbers you enter: ", n);
   creation(arr);

    return 0;
}

