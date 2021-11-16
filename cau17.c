#include <stdio.h>

int checkPerfect(int num){
    int sum=0;
    int OriginalNumber=num;
    for(int i=1;i<OriginalNumber;i++){
        if(OriginalNumber%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
    }
}

void printPerfect(int start,int end){
    while(start<=end){
        if(checkPerfect(start)==1){
            printf("%d ",start);
        }start++;
    }
}

int main(){
int num;
do{
    printf("Please enter a validating number: ");
    scanf("%d",&num);
}while(num<0);
printPerfect(1,num);

    return 0;
}