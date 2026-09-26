/*
Name:Joseph kahiga
Reg No:CT100/G/30618/26
Date:23rd september
Description:prompting data using c variables
*/

#include<stdio.h>

int main()
{
float height;
double bank_balance;
char phone_Number[11];

printf("Enter your height in centimetres:");
scanf("%f",&height);

printf("Enter your bank_balance(Ksh):");
scanf("%lf",&bank_balance);

printf("Enter your phone_Number:");
scanf("%11s",phone_Number);

printf("Height %.f centimetre\n",height);
printf("bank_balance ksh %.f\n",bank_balance);
printf("phone_Number %s\n",phone_Number);

return 0;
}