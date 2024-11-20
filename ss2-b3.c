#include<stdio.h>

int main(){
   int firstNumber = 10;
   
   int secondNumber = 8;
   
   int total = firstNumber + secondNumber;
   
   int minus = firstNumber - secondNumber;
   
   int multy = firstNumber * secondNumber;
   
   float divide = (float)firstNumber/secondNumber; 
   
   printf("Tong la %d\n",total);
   
   printf("Hieu la %d\n",minus);
   
   printf("Tich la %d\n",multy);
   
   printf("Thuong la %.2f",divide);
   
   
   
   return 0;
}
