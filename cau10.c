#include<stdio.h>

int main(){
    int num;
    int answer=0;
    int remainder;
    int OriginalNumber;

    printf("Please enter a number: ");
    scanf("%d",&num);
    OriginalNumber=num;

    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        answer=(answer*10)+remainder;
        OriginalNumber/=10;
    }
    printf("%d After swaping is %d ",num,answer);
        return 0;
}