<<<<<<< HEAD
#include <stdio.h>

int is_Prime(int num){
    int result=1;
    int i=2;
    if(num<2){
        return result=0;
    }
=======
#include<stdio.h>

int checkPrime(int num){
    int result=1;
    if(num<2){
        return result=0;
    }
    int i=2;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
    while(i<num){
        if(num%i==0){
            result=0;
            break;
        }i++;
    }
    return result;
}

int main(){
<<<<<<< HEAD
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    if(is_Prime(num)==1){
        printf("This is a Prime number");
    }else{
        printf("This is not a Prime number");
    }
        return 0;
}
=======
int num;
do{
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);
int check=checkPrime(num);

if(check==1){
    printf("This is a Prime number");
}else{
    printf("This is not a Prime number");
}

    return 0;
}
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
