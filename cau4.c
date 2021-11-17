#include <stdio.h>
#include <math.h>

int is_Triangle(int edge1,int edge2,int edge3);
int perimeter(int edge1,int edge2,int edge3);
float Area(int edge1,int edge2,int edge3);
int Type_Triangle(int edge1,int edge2,int edge3);
int main(){
    int edge1,edge2,edge3;

    printf("Please enter edge1: ");
    scanf("%d",&edge1);
    printf("Please enter edge2: ");
    scanf("%d",&edge2);
    printf("Please enter edge3: ");
    scanf("%d",&edge3);

    if(is_Triangle(edge1,edge2,edge3)==0){
        printf("Error!!!!!!!!!");
        return 0;
    };

    printf("Perimeter of Triangle is: %d\n",perimeter(edge1,edge2,edge3));
    printf("Area of Triangle is:%f\n",Area(edge1,edge2,edge3));

    int type=Type_Triangle(edge1,edge2,edge3);
    
    if(type==0){
        printf("This is equilateral triangle");
    }else if(type == 1 ){
        printf("This is Isosceles triangle");
    }else{
        printf("This is regular Triangle");
    }
    return 0;
}

int is_Triangle(int edge1,int edge2,int edge3){
    if(edge1 + edge2 < edge3 || edge1 + edge3 < edge2 || edge2 + edge3 < edge1){
        return 0;   
    }
}
int perimeter(int edge1,int edge2,int edge3){
    return edge1+edge2+edge3;
}
float Area(int edge1,int edge2,int edge3){
    float p;
    p=((float)edge1+(float)edge2+(float)edge3)/2;
    return sqrt(p*(p-(float)edge1)*(p-(float)edge2)*(p-(float)edge3));
}
int Type_Triangle(int edge1,int edge2,int edge3){
    if(edge1 == edge2 && edge2 == edge3){
        return 0;
    }else if(edge1 == edge2 || edge1 == edge3 || edge3 == edge1){
        return 1;
    }else{
        return 2;
    }
}
