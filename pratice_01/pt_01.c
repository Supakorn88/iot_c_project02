#include "stdio.h"
#include "conio.h"

void main(){

    char name;
    float money_loan,benefit_loan;

    printf("Input Name: ");
    scanf("%s",&name);
    printf("Input Money of loan: ");
    scanf("%f",&money_loan);

    if (money_loan >=1000 )
    {
        benefit_loan = money_loan * 1.025;
        printf("Benefit = %f",benefit_loan);
    }else{
        benefit_loan = money_loan * 1.025;
        printf("benefit =%f",benefit_loan);

    }

    getch;
}