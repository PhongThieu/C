#include<stdio.h>

void is_Prime(int num){
    for(int i=2;i<=num;i++){
        int c=0;
        for(int j=1;j<=i;j++){
            
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            printf("%d ", i);
        }
    }
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    is_Prime(num);
 
    return 0;
}