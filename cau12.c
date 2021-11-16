#include <stdio.h>

int is_Prime(int num){
    int result=1;
    int i=2;
    if(num<2){
        return result=0;
    }
    while(i<num){
        if(num%i==0){
            result=0;
            break;
        }i++;
    }
    return result;
}

int main(){
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