#include<stdio.h>

int checkPrime(int num){
    int result=1;
    if(num<2){
        return result=0;
    }
    int i=2;
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
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);
int check=checkPrime(num);

if(check==1){
    printf("This is a Prime number");
}else{
    printf("This is not a Prime number");
}

    return 0;
}
