#include<stdio.h>

int main(){
 int num;
 int Binary=0;
 int remainder;
 int temp=1;
 do{
     printf("Please enter a number: ");
     scanf("%d",&num);
 }while(num<0);

 while(num>0){
     remainder=num%2;
     num/=2;
     Binary+=remainder*temp;
     temp*=10;
 }
 printf("Your Binary code is: %d",Binary);
        return 0;
}