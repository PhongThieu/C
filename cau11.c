#include <stdio.h>

int check_Palindrome(int num){
    int OriginalNumber;
    int remainder;
    int sum=0;
    OriginalNumber=num;
    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        sum=sum*10+remainder;
        OriginalNumber/=10;
    }
    int result=1;
    if(sum==num){
        return result=1;
    }else{
        return result =0;
    }
    return result;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    if(check_Palindrome(num)==1){
        printf("This is a Palindrome number");
    }else{
        printf("This is not a Palindrome number");
    }
        return 0;
}