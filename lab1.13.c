#include<stdio.h>
int main(){

    float Phy,Chem,Bio,Math,Comp;
    float percent;

    printf("Please enter Physics score: ");
    scanf("%f",&Phy);

    printf("Please enter Chemistry score: ");
    scanf("%f",&Chem);

    printf("Please enter Biology score: ");
    scanf("%f",&Bio);

    printf("Please enter Mathematics score: ");
    scanf("%f",&Math);

    printf("Please enter Computer score: ");
    scanf("%f",&Comp);

    percent = ((Phy+Chem+Bio+Math+Comp)/5)*10;

    if(percent>90){
        printf("Grade A");
    }else if(percent>80){
        printf("Grade B");
    }else if(percent>70){
        printf("Grade C");
    }else if(percent >60){
        printf("Grade D");
    }else if(percent >40){
        printf("Grade E");
    }else{
        printf("Grade F");
    }

    return 0;

}