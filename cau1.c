#include <stdio.h>

double taken_Money(double m,double h);

int main(){
    double m,h;
    printf("Please enter hours: ");
    scanf("%lf",&h);
    printf("Please enter money/hour: ");
    scanf("%lf",&m);
    printf("%.4lf",taken_Money(m,h));
    return 0;
}


double taken_Money(double m,double h){
    if(h<=40){
        return m*h;
    }else if(h<=45){
        return 40*m+(h-40)*m*1.8;
    }else if(h<=50){
        return 40*m+5*1.8*m+(h-45)*2.5*m;
    }else if(h>50){
        return 40*m+5*1.8*m+5*2.5*m+(h-50)*2.6*m;
    }
}
