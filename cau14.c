#include<stdio.h>

int is_Perfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    
    if(is_Perfect(num)==num){
        printf("This is a Perfect number");
    }else{
        printf("This is not a Perfect number");
    }
    return 0;
}