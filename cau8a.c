#include <stdio.h>
#include<math.h>

double function1(int n);
int function2(int n);
double function3(int n);
int function4(int n);
double function5(int n);

int main(){
    int n;
    do{
        printf("Please enter a validating number: ");
        scanf("%d",&n);
    }while(n<0);
    // for(int i=1;i<=n;i++){
    //     sum+=(i+1)/sqrt(i);
    // }
    printf("sum of function1: %lf",function1(n));
    printf("\nsum of function2: %d",function2(n));
    printf("\nsum of function3: %lf",function3(n));
    printf("\nsum of function4: %d",function4(n));
    printf("\nsum of function4: %lf",function5(n));
    return 0;
}

double function1(int n){
    double sum=0;
    for (int i=1;i<=n;i++){
        sum+=(i+1)/sqrt(i);
    }
    return sum;
}

int function2(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

double function3(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=1/i;
        }
    return sum;
}

int function4(int n){
    int sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

double function5(int n){
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=pow(-1,i)/i;
    }
    return sum;
}
