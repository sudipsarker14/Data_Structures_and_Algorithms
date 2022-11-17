#include <stdio.h>
 int n;
int travers(int x[]){
    for(int i = 0; i<n; i++){
    scanf("%d", &x[i]);
    }
}
int creation(int x[]){
    for(int i = 0; i<n; i++){
    printf("%d\n",x[i]);
    }
}
int main() {

    printf("Enter the value = ");
    scanf("%d", &n);
	int arr[n] ;
	travers(arr);
	creation(arr);
	return 0;
}
