#include<stdio.h>

int main(){

    int num;
    int sum=0;
    int OriginalNumber;
    int i=1;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    OriginalNumber=num;
   
    while(i<OriginalNumber){       
        if(OriginalNumber%i==0){
            sum+=i;
        }i++;
    }
    if(sum==num){
        printf("This is a Perfect number");
    }else{
        printf("This is not a Perfect number");
    }

        return 0;
}