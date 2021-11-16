#include<stdio.h>

int sum_even(int num){
    int sum=0;
    for(int i=0;i<=num;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}

    int main(){
    int sum=0;
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    sum=sum_even(num);
    printf("Sum=%d",sum);


        return 0;
}