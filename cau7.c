#include<stdio.h>

int main(){

    int num;
    int answer=1;
    int remainder;

    printf("Please enter a number: ");
    scanf("%d",&num);

    while(num>0){
        remainder=num%10;
        answer*=remainder;
        num/=10;
    }
    printf("Product of digits is: %d",answer);

        return 0;
}