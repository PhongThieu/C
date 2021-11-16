#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;

    printf("Please enter a number: ");
    scanf("%d",&num);

    if(num>=0){
        printf("absolute of %d is %d",num,num);
    }else{
        printf("absolute of %d is %d",num,num-num-num);
    }

    
        return 0;
}