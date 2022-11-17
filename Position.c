#include <stdio.h>
 int n, pos , val;
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
	printf("Enter position you want to change = ");
    scanf("%d", &pos);
    printf("Enter the value = ");
    scanf("%d", &val);
    pos--;
    arr[pos]= val;
	creation(arr);
	return 0;
}
