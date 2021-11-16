#include<stdio.h>

int product_digits(int num){
    int remainder;
    int prod=1;
    while(num>0){
        remainder=num%10;
        prod*=remainder;
        num/=10;
    }
    return prod;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    
    int prod=product_digits(num);
    printf("Product of digits is: %d",prod);



        return 0;
}