#include<stdio.h>

int checkPrime(int num){
int i=2;
int result=1;
if(num<=2){
    return result=0;
}

while(i<num){               //kt so nguyen to
    if(num%i==0){
        result=0;
        break;
    }i++;   
}
return result;
}

int main(){

int num;
int result=1;

int kt;
do{
    printf("Please enter a number: ");
    scanf("%d",&num);
}while(num<0);


for(int i=2;i<=num;i++){
    kt=checkPrime(i);
    if(kt==1){
        printf("%d ",i);
    }
}
        return 0;
}
