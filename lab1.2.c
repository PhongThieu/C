#include<stdio.h>
int main(){
    int a,b;

    printf("Please enter two integer numbers:");
    scanf("%d%d",&a,&b);

    printf("a = %d\n",a);
    printf("b = %d\n",b);

    printf("a + b = %d",a+b);
    printf("\na - b = %d",a-b);
    printf("\na * b = %d",a*b);
    printf("\na / b = %d",a/b);
    printf("\na %% b = %d",a%b);


    return 0;
}