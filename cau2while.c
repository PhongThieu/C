#include <stdio.h>

int main(){
int num;
int sum=0;
int i=1;
    do{
        printf("Enter a number >0: ");
        scanf("%d",&num);
    }while(num<0);

    while(i<=num){
            sum+=i;
            i+=2;
    }
    printf("sum from 1 to %d of even number is: %d",num,sum);

        return 0;
}
