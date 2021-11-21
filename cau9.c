#include <stdio.h>
#include<math.h>

int is_reverseNumber(int n);
int is_perfectNumber(int n);
int is_primeNumber(int n);
int is_palindromeNumber(int n);
int is_armstrongNumber(int n);

int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    for (int i=1;i<=5;i++){
        if(n<0){
            printf("Please enter validating number (n>0): ");
            scanf("%d",&n);
        }else break;
    }

   int reverse=is_reverseNumber(n);
   printf("After reverse: %d",reverse);

   if(is_perfectNumber(n)==1){
       printf("\nThis is Perfect number");
   }else{
       printf("\nThis is not a Perfect number");
   }

   if(is_primeNumber(n)==1){
       printf("\n This is a Prime number");
   }else{
       printf("\nThis is not a Prime number");
   }

   if(is_palindromeNumber(n)==1){
       printf("\nThis is a Palindrome number");
   }else{
       printf("\nThis is not a Palindrome number");
   }

   if(is_armstrongNumber(n)==1){
       printf("\nThis is an Armstrong number");
   }else{
       printf("\nThis is not an Armstrong number");
   }

    return 0;
}

int is_reverseNumber(int n){
    int remainder,sum=0;
    while(n>0){
        remainder=n%10;
        sum=sum*10+remainder;
        n/=10;
    }
    return sum;
  
}

int is_perfectNumber(int n){
    int sum=0;
    int OriginalNumber=n;
    for(int i=1;i<OriginalNumber;i++){
        if(OriginalNumber%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        return 1;
    }
}

int is_primeNumber(int n){
    int s=1;
    if(n==1){
        return s=0;
    }
    int i=2;
    while(i<n){
        if(n%i==0){
            s=0;
            break;
        }i++;
    }
    return s;
}

int is_palindromeNumber(int n){
    int Originalnumber=n;
    int remainder;
    int sum=0;
    while(Originalnumber>0){
        remainder=Originalnumber%10;
        sum=sum*10+remainder;
        Originalnumber/=10;
    }
    if(sum==n){
        return 1;
    }
}

int is_armstrongNumber(int n){
    int count=0,sum=0;
    int remainder;
    for(int OriginalNumber=n;OriginalNumber>0;){
        OriginalNumber/=10;
        count++;
    }
    for(int OriginalNumber=n;OriginalNumber>0;){
        remainder=OriginalNumber%10;
        sum+=pow(remainder,count);
        OriginalNumber/=10;
    }
    if(sum==n){
        return 1;
    }
}