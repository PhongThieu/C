#include <stdio.h>

int main(){

    int num;
    int sum=0;
    int i=1;

    do{
        printf("Please enter a number >0:");
        scanf("%d",&num);
    }while(num<0);

    do{
        sum+=i;
        i++;
    }while(i<=num);

    printf("Sum of 1 to %d is: %d",num,sum);

        return 0;
}
