#include <stdio.h>
#include <math.h>

double function(double x,double y);

int main(){
    double x, y;
    printf("Please enter x: ");
    scanf("%lf",&x);
    printf("Please enter y: ");
    scanf("%lf",&y);
    printf("Your answer is: %.2lf",function(x,y));
}

double function(double x,double y){
    return (3*pow(x,3)*y-1.0/2*pow(x,2),1.0/5*x*y)*6*x*pow(y,3);
}