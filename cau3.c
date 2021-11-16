#include<stdio.h>

int main(){
    int num;

        printf("Please enter a number: ");
        scanf("%d",&num);
        printf("\n\n");

        printf("Table of number %d is:\n",num);
        for(int i=1;i<=10;i++){
            for(int j=1;j<=num;j++){
                printf("%d x %d = %d\t",j,i,i*j);
            }
                printf("\n");
        }
    

    return 0;
}