<<<<<<< HEAD
#include<stdio.h>

int factorial(int num){
    int factorial=1;
    for(int i=1;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    int num;
=======
#include <stdio.h>

int main(){
    int num;
    int factorial=1;
    int i=1;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

<<<<<<< HEAD
    printf("%d! = %d",num,factorial(num));
        return 0;
=======
    for(i;i<=num;i++){
        factorial*=i;
    }
    printf("%d! = %d",num,factorial);
    return 0;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
}