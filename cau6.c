#include<stdio.h>

<<<<<<< HEAD
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
=======
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


>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507

        return 0;
}