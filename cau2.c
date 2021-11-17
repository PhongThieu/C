#include <stdio.h>

double taxi_fee (double d);

int main(){
    double d;
    printf("Please enter d(km): ");
    scanf("%lf",&d);
    printf("your taxi fee is: %.2lf vnd",taxi_fee(d));

    return 0;
}

double taxi_fee (double d){
    if(d<1){
        return 18000*d;
    }else if(d<=10){
        return 18000*1+(d-1)*8000;
    }else if(d<=30){
        return 18000*1+9*8000+(d-30)*6000;
    }else if(d>30){
        return 18000+9*8000+20*6000+(d-30)*4000;
    }
}
