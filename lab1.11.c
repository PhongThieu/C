#include<stdio.h>
int main(){
    char c;

    printf("Please enter 1 character: ");
    scanf("%c",&c);

    if(c >= 'A' && c <= 'Z' || c >= 'a' && c<= 'z' || c >= '0' && c <= '9'){
        printf("%c is an alphanumeric ",c);
    }else{
        printf("%c is not an alphanumeric",c);
    }
        return 0;
}