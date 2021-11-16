#include<stdio.h>
#include<math.h>

int is_Armstrong(int num){
    int count=0;
    int remainder;
    int OriginalNumber;
    int sum=0;
    OriginalNumber=num;
    while(OriginalNumber>0){
        OriginalNumber/=10;
        count++;
    }
    OriginalNumber=num;
    while(OriginalNumber>0){
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }
    return sum;
}


int main(){
int num;
do{
    printf("Please enter a number: ");
    scanf("%d",&num);
}while(num<0);

if(is_Armstrong(num)==num){
    printf("This is an Armstrong number");
}else{
    printf("This is not an Armstrong number");
}



    return 0;
}