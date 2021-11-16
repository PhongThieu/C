#include<stdio.h>
#include<math.h>

int checkArmstrongNumber(int num){
   int OriginalNumber;
   int remainder;
   int sum=0;
   int count=0;
   int i=1;

    for(OriginalNumber=num;OriginalNumber>0;i++){
            OriginalNumber/=10;
            count++;
    }

    for( OriginalNumber=num;OriginalNumber>0;i++){
        remainder=OriginalNumber%10;
        sum +=pow(remainder,count);
        OriginalNumber/=10;
    }
    return sum;
}
int main(){
   int num;
   int i=1;
   do{
       printf("Please enter a validating number: ");
       scanf("%d",&num);
   }while(num<0);

    for(i;i<=num;i++){
        
        int kt=checkArmstrongNumber(i);
        if(kt==i){
            printf("%d ",i);
        }
  }
    return 0;
}