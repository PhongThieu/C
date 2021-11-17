#include <stdio.h>
#include<math.h>

double function (double x);

int main(){
    double x;
    printf("Please enter x: ");
    scanf("%lf",&x);
    printf("%lf",function(x));
    return 0;
}

double function (double x){
    if(x<0){
        return sin(x)*cos(5*x);
    }else if(x==0){
        return pow(5,x);
    }else if (x>0 && x<5){
        return exp(x);
    }else {
        return pow(5,x)/(x+5);
    }
}