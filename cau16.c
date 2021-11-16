#include<stdio.h>
#include<math.h>

int isArmstrong(int num){
    int remainder;
    int count=0;
    int OriginalNumber;
    int sum=0;
    for(OriginalNumber=num;OriginalNumber>0;count++){
        OriginalNumber/=10;
    }
    for(OriginalNumber=num;OriginalNumber>0;){
            remainder=OriginalNumber%10;
            sum+=pow(remainder,count);
            OriginalNumber/=10;
    }
    if(sum==num){
        return 1;
    }else{
        return 0;
       }
    }
void printArmstrong(int start,int end){
    while(start<=end){
        if(Armstrong(start)){
            printf("%d ",start);
        }
        start++;
    }
}
int main(){
    int start=1;
    int num;
    do{
        printf("Please enter an number: ");
        scanf("%d",&num);
    }while(end<0);

    printArmstrong(1,num);
        return 0;
}