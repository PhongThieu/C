#include<stdio.h>

<<<<<<< HEAD
int reverse(int num){
    int remainder;
    int sum=0;
    while(num>0){
        remainder=num%10;
        sum=sum*10+remainder;
        num/=10;
        
    }
    return sum;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    printf("Your reverse is: %d\n",reverse(num));
    
=======
int main(){
    int num;
    int answer=0;
    int remainder;
    int OriginalNumber;

    printf("Please enter a number: ");
    scanf("%d",&num);
    OriginalNumber=num;

    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        answer=(answer*10)+remainder;
        OriginalNumber/=10;
    }
    printf("%d After swaping is %d ",num,answer);
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
        return 0;
}