<<<<<<< HEAD
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
=======
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
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
        return 0;
}