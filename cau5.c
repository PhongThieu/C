#include <stdio.h>

int findlast(int num){
    num%=10;
    return num;
}

int findfirst(int num){
    int remainder;
    while(num>0){
        remainder=num%10;
        num/=10;
    }
    return remainder;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    printf("Last digit: %d",findlast(num));
    printf("\n\n");
    printf("First digit: %d",findfirst(num));

    return 0;
}