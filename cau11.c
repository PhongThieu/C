#include<stdio.h>


int main(){

    int num;
    int result;
    int last,first,remainder;
    int factor=1;
    int middle=0;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num<10){
        printf("This is not a palindrome number");
    }
    int OriginalNumber=num;
    if(OriginalNumber>10){
        last=OriginalNumber%10;
        OriginalNumber/=10;
        while(OriginalNumber>10){
            remainder=OriginalNumber%10;
            middle=middle+remainder*factor;
            factor=factor*10;
            OriginalNumber=OriginalNumber/10;
        }
     }
     result=((middle+last*factor))*10+OriginalNumber;
     if(result==num){
         printf("This is a palindrome number");
     }else{
         printf("This is not a palindrome number");
     }
        return 0;
}