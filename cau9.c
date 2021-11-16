#include<stdio.h>

int main(){
    int num;
    int result=0;
    int factor=1;
    int last;
    int first;
    int middle=0;
    int remainder;

    printf("Please enter a number: ");
    scanf("%d",&num);
    
    if(num<10){
        result=num;
    }
    if(num>10){
        last =num%10;
        num/=10;
        while(num>10){
            remainder=num%10;
            middle=middle+(remainder*factor);
            factor=factor*10;
            num/=10;
        }
    }
    first=num;
    result=((last*factor+middle))*10+first;
    printf("result is : %d",result);
   
 
        return 0;
}