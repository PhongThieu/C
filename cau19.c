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
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    printf("%d! = %d",num,factorial(num));
        return 0;
}