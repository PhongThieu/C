#include <stdio.h>

int main(){
int sum=0;
int num;
    do{
    printf("Please enter a number > 0: ");
    scanf("%d",&num);
} while(num<0);
    for (int i=1;i<=num;i=i+2){
        sum+=i;
    }
    printf("Sum of 1 to %d of odd number: %d",num,sum);

        return 0;
}