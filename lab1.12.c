#include<stdio.h>
int main(){
    int ang1,ang2,ang3;
    int condition;

    printf("Please enter angle 1: ");
    scanf("%d",&ang1);

    printf("Please enter angle 2: ");
    scanf("%d",&ang2);

    printf("Please enter angle 3: ");
    scanf("%d",&ang3);

    condition=ang1+ang2+ang3;
    if(condition==180){
            printf("triangle is valid");
    }else{
            printf("triangle is not valid");
    }

        return 0;
}