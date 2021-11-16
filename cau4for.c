#include <stdio.h>

int main(){

    int num;
    int sum=0;
    int i;

    do{
        printf("Please enter a number >0:");
        scanf("%d",&num);
    }while(num<0);

   for(i=1;i<=num;i++){
       sum+=i;
   }

    printf("Sum of 1 to %d is: %d",num,sum);

        return 0;
}