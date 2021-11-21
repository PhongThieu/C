#include <stdio.h>

void greatestCommonDivisor(int num1,int num2);
void commonDivisor(int num1,int num2);
int main(){
    int num1,num2;
    do{
        printf("Please enter number 1: ");
        scanf("%d",&num1);
        printf("Please enter number 2: ");
        scanf("%d",&num2);
    }while(num1<0||num2<0);
    commonDivisor(num1,num2);
    greatestCommonDivisor(num1,num2);
    return 0;
}

void greatestCommonDivisor(int num1,int num2){
   int answer=1;
   for(int i=num1;i>=1;i--){
    if(num1%i==0 && num2%i==0){
        answer=i;
        break;
    }
}
printf("\nLowest common multiple:%d",(num1*num2)/answer);
printf("\nGreatest Common Divisor: %d",answer);
}

void commonDivisor(int num1,int num2){
    printf("Common Divisor: ");
      if (num1 > num2 || num1 == num2){
       for(int i=1;i<=num1;i++){
           if(num1%i==0 && num2%i==0){
               printf("%d ",i);
           }
       }
   }else{
       for(int i=1;i<=num2;i++){
           if(num1%i==0 && num2%i==0){
               printf("%d ",i);
           }
       }
   }
}