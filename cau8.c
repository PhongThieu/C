#include<stdio.h>

<<<<<<< HEAD
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
=======

int main(){

int num;
int count;
int remainder;

printf("Please enter a number: ");
scanf("%d",&num);

while(num>0){
    remainder=num%10;
    count++;
    num/=10;
}

printf("number of digits: %d ",count);

        return 0;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
}