#include <stdio.h>

int main(){
    int num;
    int factorial=1;
    int i=1;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    for(i;i<=num;i++){
        factorial*=i;
    }
    printf("%d! = %d",num,factorial);
    return 0;
}