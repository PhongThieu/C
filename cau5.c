#include <stdio.h>

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
