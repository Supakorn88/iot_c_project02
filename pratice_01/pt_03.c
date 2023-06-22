#include "stdio.h"
#include "conio.h"

void main(){

    int home_number;
    float unit_electric, pay;

    printf("Input Home Number: ");
    scanf("%d",&home_number);
    printf("Input Unit of Electronic: ");
    scanf("%f",&unit_electric);
     if (unit_electric <= 20)
     {
        pay = unit_electric * 5;
        printf("Pay for Electrnic: %.2f",pay);
     }else if (unit_electric <= 50)
     {
        pay = unit_electric * 4.50;
        printf("Pay for Electrnic: %.2f",pay);
     }else{
        pay = unit_electric * 4;
        printf("Pay for Electrnic: %.2f",pay);
     };
     

    getch;
}