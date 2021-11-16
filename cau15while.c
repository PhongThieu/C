#include<stdio.h>

int checkPrime(int n){
    int result=1;
    int i=2;
    if(n<=2){
        return 0;
    }
    while(i<n){
        if(n%i==0){
            result=0;
            break;
        }i++
    }
    return result;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num); 
    }while (num<0);

    
    return 0;
}