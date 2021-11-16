#include<stdio.h>

int checkPrime(int n){
    int i=2;
    int result=1;
    if(n<=2){
        return result=0;
    }
    while(i<n){
        if(n%i==0){
            result=0;
            break;
        }i++;
    }
    return result;
}


int main(){
   int num;
   do{
       printf("Please enter a number : ");
       scanf("%d",&num);
   }while(num<0);

    int i=2;
  do{
      int kt=check(i);
      if(kt==1){
          printf("%d ",i);
      }i++;
  }while(i<=num);
    return 0;
}