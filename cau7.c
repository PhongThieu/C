#include <stdio.h>


int main(){
    int money;
    printf("moi ban nhap so tien: ");
    scanf("%d",&money);
    int so=0;
    printf("Moi ban nhap so: ");
    scanf("%d",&so);
    switch (so) {
        case 1:
        if(money>6000){
            printf("Pepsi");
            printf("\ndư %d",money-6000);
            break;
        }else if(money==6000){
            printf("Pepsi");
            break;
        }else{
            printf("Thiếu %d",6000-money);
            break;
        }

        case 2:
        if(money >7000){
            printf("Trà xanh");
            printf("\ndư %d",money-7000);
            break;
        }else if(money ==7000){
            printf("Trà xanh");
            break;
        }else{
            printf("Thiếu %d",7000-money);
            break;
        }
       
        case 3:
        if(money >8000){
            printf("Sting");
            printf("\ndư %d",money-8000);
            break;
        }else if(money == 8000){
            printf("Sting");
            break;
        }else{
            printf("Thiếu %d",8000-money);
            break;
        }
        
        case 4:
        if(money >6000){
            printf("Sữa tươi");
            printf("\ndư %d",money-6000);
            break;
        }else if(money == 6000){
            printf("Sữa tươi");
            break;
        }else{
            printf("Thiếu %d",6000-money);
            break;
        }
        
        case 5:
        if(money>4000){
            printf("Nước suối");
            printf("\ndư %d",money-4000);
            break;
        }else if(money == 4000){
            printf("Nước suối");
            break;
        }else{
            printf("Thiếu %d",4000-money);
            break;
        }
        
    }

    return 0;
}