#include<stdio.h>

<<<<<<< HEAD
int product_digits(int num){
    int remainder;
    int prod=1;
    while(num>0){
        remainder=num%10;
        prod*=remainder;
        num/=10;
    }
    return prod;
}

int main(){
    int num;
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
    
    int prod=product_digits(num);
    printf("Product of digits is: %d",prod);


=======
int main(){

    int num;
    int answer=1;
    int remainder;

    printf("Please enter a number: ");
    scanf("%d",&num);

    while(num>0){
        remainder=num%10;
        answer*=remainder;
        num/=10;
    }
    printf("Product of digits is: %d",answer);
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507

        return 0;
}