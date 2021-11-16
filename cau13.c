#include <stdio.h>
#include<math.h>
int main(){
    int num;
    int sum=0;
    int remainder;
    int OriginalNumber;
    int count=0;
    printf("Please enter a number: ");
    scanf("%d",&num);
    OriginalNumber=num;
    while(OriginalNumber>0){
        OriginalNumber/=10;
        count++;
    }
    // printf("%d",count);
    OriginalNumber=num;
    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }
    
    if(sum==num){
        printf("This is an Armstrong number");
    }else{
        printf("This is not Armstrong number");
    }
        return 0;
}