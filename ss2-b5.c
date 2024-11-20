#include<stdio.h>

int main(){
    int chieu_dai = 5;
    printf("Chieu dai la %d cm\n",chieu_dai);
    int chieu_rong = 4;
    printf("Chieu rong la %d cm\n",chieu_rong);
    
    int chu_vi = 2 * (chieu_dai+chieu_rong);
    
    printf("Chu vi la %d\n",chu_vi);
    
    int dien_tich = chieu_dai * chieu_rong;
    printf("Dien tich la %d",dien_tich);
   return 0;
}
