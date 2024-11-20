#include<stdio.h>

int main(){
  const float pi = 3.14;
  
  int ban_kinh = 6;
   printf("Ban kinh hinh tron la %d\n", ban_kinh);
  
  float chu_vi = 2*pi*ban_kinh;
  
  printf("Chu vi hinh tron la %.2f\n", chu_vi);
  
  float dien_tich = pi*(ban_kinh*ban_kinh);
  
  printf("Dien tich hinh tron la %.2f", dien_tich);
  
  
  
  return 0;
}
