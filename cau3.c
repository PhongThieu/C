#include<stdio.h>

<<<<<<< HEAD
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

=======
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
    
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507

    return 0;
}