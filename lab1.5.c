#include<stdio.h>
#define const 33.8
int main(){
     float Cel,Fah;

     printf("Please enter Celsius: ");
     scanf("%f",&Cel);

     Fah = Cel*const;
     printf("%.1f C = %.1f F",Cel,Fah);   
        return 0;
}