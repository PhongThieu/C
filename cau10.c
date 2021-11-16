#include<stdio.h>

int reverse(int num){
    int remainder;
    int sum=0;
    while(num>0){
        remainder=num%10;
        sum=sum*10+remainder;
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
    printf("Your reverse is: %d\n",reverse(num));
    
        return 0;
}