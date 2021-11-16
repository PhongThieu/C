#include<stdio.h>

int count_digits(int num){
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    return count;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    int count=count_digits(num);
    printf("number of digits is: %d",count);
    return 0;
}