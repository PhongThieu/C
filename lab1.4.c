#include<stdio.h>   
int main(){
    int day;
    int days,years,weeks;


     
     printf("Please enter day: ");
     scanf("%d",&day);

     years=day/365;
     weeks=(day%365)/7;
     printf("%d\n",weeks);
     days=day-(years*365)-(weeks*7);
     
  
    

     printf("%d days : %d years %d weeks %d days",day,years,weeks,days);

    
        return 0;
}