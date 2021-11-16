#include<stdio.h>
int main(){
    int num1,num2;
    int maxvalue;

    printf("Please enter number 1: ");
    scanf("%d",&num1);

    printf("Please enter number 2: ");
    scanf("%d",&num2);

    maxvalue =num1;
    if(num2 > maxvalue){
        printf("maxvalue is %d",num2);
    }else{
        printf("maxvalue is %d",maxvalue);
    }
    

        return 0;
}