#include<stdio.h>

int checkPerfect(int num){
    int i=1;
    int result =1;
    int sum=0;
    int OriginalNumber;
    OriginalNumber=num;
    while(i<OriginalNumber){
        if(OriginalNumber%i==0){
            sum+=i;
        }i++;
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
int i=1;
do{
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);

while(i<=num){
    int kt = checkPerfect(i);
    if(kt==1){
        printf("%d ",i);
    }i++;
}

    return 0;
}
