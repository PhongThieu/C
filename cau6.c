#include<stdio.h>

int main(){
int num;
int sum=0;
int remainder;
printf("Please enter a number: ");
scanf("%d",&num);

while(num>0){
    remainder=num%10;
    sum+=remainder;
    num/=10;
}
printf("sum of digit is: %d",sum);



        return 0;
}