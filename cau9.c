#include<stdio.h>

int swap_digits(int num){
    int remainder;
    int last_digit;
    int sum=0;
    int factor=10;
    last_digit=num%10;
        num/=10;
    while(num>10){
        remainder=num%10;
        sum=sum+remainder*factor;
        factor=factor*10;
        num/=10;
    }
    
    return last_digit*factor+sum+num;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    printf("after swap: %d",swap_digits(num));

    return 0;
}