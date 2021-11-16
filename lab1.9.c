#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Please enter number 1: ");
    scanf("%d",&num1);

    printf("Please enter number 2: ");
    scanf("%d",&num2);
    
    printf("Please enter number 3: ");
    scanf("%d",&num3);

    int maxvalue =num1;

    if(num2 >= maxvalue && num2>= num3){
        printf("Maxvalue is %d",num2);
    }else if(num2<=num3 && num3>=maxvalue){
        printf("Maxvalue is %d",num3);
    }else{
        printf("Maxvalue is %d",maxvalue);
    }
    
        return 0;
}