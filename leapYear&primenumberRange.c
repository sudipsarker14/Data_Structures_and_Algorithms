#include <stdio.h>
/*int main(){
    int startyear, endyear;
    printf("Enter the starting year: ");
    scanf("%d", &startyear);

    printf("Enter the ending year: ");
    scanf("%d", &endyear);
    printf("leap Years: \n");
    for(int i = startyear; i<=endyear; i++){
        if(i % 4 == 0) && (i % 100 == 0) || (i & 400 == 0){
            printf("%d\n", i);
        }
    } 
}*/

int main() {
int low, high, i, flag;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &low, &high);
printf("Prime numbers between %d and %d are: ", low, high);
// iteration until low is not equal to high
while (low < high) {
flag = 0;
// ignore numbers less than 2
if (low <= 1) {
++low;
continue;
}
// if low is a non-prime number, flag will be 1
for (i = 2; i <= low / 2; ++i) {
if (low % i == 0) {
flag = 1;
break;
}
}
if (flag == 0)
printf("%d ", low);
// to check prime for the next number
// increase low by 1
++low;
}
return 0;
}

