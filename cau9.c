#include<stdio.h>

<<<<<<< HEAD
int swap_digits(int num){
    int remainder;
    int last_digit;
    int sum=0;
    int factor=10;
    last_digit=num%10;
        num/=10;
    while(num>10){
        remainder=num%10;
        sum=sum+remainder*factor;
        factor=factor*10;
        num/=10;
    }
    
    return last_digit*factor+sum+num;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    printf("after swap: %d",swap_digits(num));

    return 0;
=======
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
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
}