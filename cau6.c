#include<stdio.h>

int sum_digits(int num){
    int remainder;
    int sum=0;
    while(num>0){
        remainder=num%10;
        sum+=remainder;
        num/=10;
    }
    return sum;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    int sum=sum_digits(num);
    printf("sum of digits is: %d",sum);

        return 0;
}