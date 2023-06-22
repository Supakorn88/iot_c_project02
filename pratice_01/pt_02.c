#include "stdio.h"
#include "conio.h"

void main(){

    char car_name;
    float car_number,hour_rent,pay_rent;

    printf("Input Name: ");
    scanf("%s",&car_name);
    printf("Input Car Number: ");
    scanf("%f",&car_number);
    printf("Input Hour for rent: ");
    scanf("%f",&hour_rent);

    if (hour_rent <= 5)
    {
        pay_rent = hour_rent * 100;
        
        printf("Pay for rent: = %.2f",pay_rent);
    }else if(hour_rent <=10 ){
        pay_rent = hour_rent * 90.50;
        printf("Pay for rent: = %.2f",pay_rent);
    }else if(hour_rent <=15 ){
        pay_rent = hour_rent * 80;
        printf("Pay for rent: = %.2f",pay_rent);
    }else{
        pay_rent = hour_rent * 70.50;
        printf("Pay for rent: = %.2f",pay_rent);
    }
    


    getch;
}