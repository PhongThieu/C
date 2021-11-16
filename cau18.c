#include <stdio.h>

int convert(int Decimal){
    int Binary=0;
    int remainder;
    int factor=1;
    while(Decimal>0){
        remainder=Decimal%2;
        Decimal/=2;
        Binary+=remainder*factor;
        factor*=10;
    }
    return Binary;
}


int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    printf("%d Decimal= %d Binary",num,convert(num));

        return 0;
}