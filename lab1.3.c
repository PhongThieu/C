#include<stdio.h>
int main (){
    int length,width;
    
    printf("Please enter length of Rectangle: ");
    scanf("%d",&length);

    printf("Please enter width of Rectangle: ");
    scanf("%d",&width);

    printf("Area of Rectangle = %d",length*width);
    printf("\nPerimeter of Rectangle = %d",(length+width)*2);

        return 0;
}