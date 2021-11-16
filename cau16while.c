#include<stdio.h>
#include<math.h>

int checkArmstrongNumber();
int main(){
   int num;
   int i=1;
   do{
       printf("Please enter a validating number: ");
       scanf("%d",&num);
   }while(num<0);

   while(i<=num){
       int kt=checkArmstrongNumber(i);
       if(kt==i){
           printf("%d ",i);
       }i++;
   }
    return 0;
}

int checkArmstrongNumber(int num){
   int OriginalNumber;
   int remainder;
   int sum=0;
   int count=0;
   int i=1;
    OriginalNumber=num;
    while(OriginalNumber>0){
        OriginalNumber/=10;
        count++;
    }
    OriginalNumber=num;
    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }
    return sum;
}