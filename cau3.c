#include <stdio.h>
#include<math.h>

int check_d(double R,double x0,double y0,double x1,double y1);

int main(){
    double x0,y0,x1,y1;
    double R;
    printf("Moi ban nhap ban kinh: ");
    scanf("%lf",&R);
    printf("Moi ban nhap hoanh do tam O: ");
    scanf("%lf",&x0);
    printf("Moi ban nhap tung do tam O: ");
    scanf("%lf",&y0);
    printf("Moi ban nhap hoanh do diem A: ");
    scanf("%lf",&x1);
    printf("Moi ban nhap tung do diem A: ");
    scanf("%lf",&y1);

    int check=check_d(R,x0,y0,x1,y1);
    if(check==1){
        printf("A nam ngoai duong tron");
    }else if(check==2){
        printf("A nam ben trong duong tron");
    }else{
        printf("A nam tren duong tron");
    }

    return 0;
}

int check_d(double R,double x0,double y0,double x1,double y1){
    double OA=sqrt(pow((x1-x0),2)-pow((y1-y0),2));
    if(OA>R){
        return 1;
    }else if(OA<R){
        return 2;
    }else{
        return 0;
    }
} 