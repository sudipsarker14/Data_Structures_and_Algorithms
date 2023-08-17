#include <stdio.h>
int main(){
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
}

