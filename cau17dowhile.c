#include<stdio.h>

int checkPerfect(int num){
    int i=1;
    int result =1;
    int sum=0;
    int OriginalNumber;
    OriginalNumber=num;
   do{
       if(OriginalNumber%i==0){
            sum+=i;
   }i++;
    }while(OriginalNumber<num);
    
    if(sum==num){
        result=1;
    }else{
        result=0;
    }
    return result;
}

int main(){
int num;
int i=1;
do{
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);

do{
    int kt = checkPerfect(i);
    if(kt==1){
        printf("%d ",i);
}i++;
}while(i<=num);

    return 0;
}
