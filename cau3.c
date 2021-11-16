#include<stdio.h>

void table(int num){
    for(int i=1;i<=10;i++){
        for(int j=1;j<=num;j++){
            printf("%d x %d =%d\t",i,j,j*i);
        }
        printf("\n");
    }
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);

    table(num);


    return 0;
}