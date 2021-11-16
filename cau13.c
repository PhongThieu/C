<<<<<<< HEAD
#include<stdio.h>
#include<math.h>

int is_Armstrong(int num){
    int count=0;
    int remainder;
    int OriginalNumber;
    int sum=0;
=======
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
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
    OriginalNumber=num;
    while(OriginalNumber>0){
        OriginalNumber/=10;
        count++;
    }
<<<<<<< HEAD
=======
    // printf("%d",count);
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
    OriginalNumber=num;
    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }
<<<<<<< HEAD
    return sum;
}


int main(){
int num;
do{
    printf("Please enter a number: ");
    scanf("%d",&num);
}while(num<0);

if(is_Armstrong(num)==num){
    printf("This is an Armstrong number");
}else{
    printf("This is not an Armstrong number");
}



    return 0;
=======
    
    if(sum==num){
        printf("This is an Armstrong number");
    }else{
        printf("This is not Armstrong number");
    }
        return 0;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
}