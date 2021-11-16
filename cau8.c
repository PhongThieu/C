#include<stdio.h>


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
}