#include<stdio.h>
#include<math.h>

int checkArmstrongNumber(int num){
    int sum=0;
    int remainder;
    int OriginalNumber;
    int count=0;

    OriginalNumber=num;
    do{
        OriginalNumber/=10;
        count++;
    }while(OriginalNumber>0);

    OriginalNumber=num;
    do{
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }while(OriginalNumber>0);
    return sum;
}

int main(){
   int num;
   int i=1;
   do{
       printf("Please enter a validating number: ");
       scanf("%d",&num);
   }while(num<0);

  do{
      int kt=checkArmstrongNumber(i);
       if(kt==i){
           printf("%d ",i);
    }i++;
  }while(i<=num);

    return 0;
}

