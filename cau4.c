#include<stdio.h>

int sum_all(int num){
    int sum=0;
    for (int i=0;i<=num;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    printf("Sum= %d",sum_all(num));
        return 0;
}