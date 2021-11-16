<<<<<<< HEAD
#include <stdio.h>

int convert(int Decimal){
    int Binary=0;
    int remainder;
    int factor=1;
    while(Decimal>0){
        remainder=Decimal%2;
        Decimal/=2;
        Binary+=remainder*factor;
        factor*=10;
    }
    return Binary;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    printf("%d Decimal= %d Binary",num,convert(num));

=======
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
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
        return 0;
}