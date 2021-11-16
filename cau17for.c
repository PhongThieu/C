#include<stdio.h>

int checkPerfect(int num){
    int i;
    int result =1;
    int sum=0;
    int OriginalNumber;
    OriginalNumber=num;
  for(i=1;i<OriginalNumber;i++){
      if(num%i==0){
          sum+=i;
      }
  }
    if(sum==num){
        result=1;
    }else{
        result=0;
    }
    return result;
}

int main(){
int num;
int i;
do{
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);

for(i=1;i<=num;i++){
    int kt =checkPerfect(i);
    if(kt==1){
        printf("%d ",i);
    }
}

    return 0;
}