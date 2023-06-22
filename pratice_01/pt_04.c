#include "stdio.h"
#include "conio.h"

void main(){

    char name;
    float number, minute,pay_ForUse;

    printf("Input Telephone Name: ");
    scanf("%s",&name);
    printf("Input Telephone Number: ");
    scanf("%f",&number);
    printf("Input Minute for use: ");
    scanf("%f",&minute);
     if (minute <= 15)
     {
        pay_ForUse = minute * 5;
        printf("Pay for use telephone: %.2f",pay_ForUse);
     }else if (minute <= 30)
     {
        pay_ForUse = minute * 3;
        printf("Pay for use telephone: %.2f",pay_ForUse);
     }else{
        pay_ForUse = minute * 1.50;
        printf("Pay for use telephone: %.2f",pay_ForUse);
     };

    getch;
}