#include <stdio.h>

<<<<<<< HEAD
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
=======
int main(){
    int num;
    int OriginalNumber;
    int first,last;

    printf("Please enter a number: ");
    scanf("%d",&num);
    last=num%10;
    while(num>=10){
        num/=10;
    }
    first=num;
    printf("last digit: %d\n",last);
    printf("first digit: %d",first);
            return 0;
}
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
