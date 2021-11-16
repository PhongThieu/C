#include<stdio.h>

<<<<<<< HEAD
int is_Perfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int num;
=======
int main(){

    int num;
    int sum=0;
    int OriginalNumber;
    int i=1;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
    do{
        printf("Please enter a number: ");
        scanf("%d",&num);
    }while(num<0);
<<<<<<< HEAD
    
    if(is_Perfect(num)==num){
=======
    OriginalNumber=num;
   
    while(i<OriginalNumber){       
        if(OriginalNumber%i==0){
            sum+=i;
        }i++;
    }
    if(sum==num){
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
        printf("This is a Perfect number");
    }else{
        printf("This is not a Perfect number");
    }
<<<<<<< HEAD
    return 0;
=======

        return 0;
>>>>>>> e8ae621b362c08f4478fc7191e7fb4e9e0704507
}