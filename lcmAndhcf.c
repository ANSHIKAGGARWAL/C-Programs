/* LCM AND HCF OF 12 and 15 is 60 and 3
THIS IS THE PROGRAM TO PRINT LCM AND HCF */

#include<stdio.h>
int main()
{
  int test_cases,number1,number2,numerator,denominator,rem,gcd,lcm;
  printf("Enter the number of test cases\n");
  scanf("%d",&test_cases);
  while(test_cases--)
{
  printf("Enter 2 numbers for calculating HCF and LCM\n");
  scanf("%d%d",&number1,&number2);
  
  numerator = (number1 > number2) ? number1 : number2;
  denominator = (number2 > number1) ? number1 : number2;
  rem = numerator % denominator;
  
  while( rem != 0)
  {
    numerator = denominator;
    denominator = rem;
    rem = numerator % denominator;
  }
  gcd = denominator;
  lcm = (number1 * number2)/gcd;
  
  printf("HCF OF %d AND %d IS %d\n",number1,number2,gcd);
  printf("LCM OF %d AND %d IS %d\n",number1,number2,lcm);
}
  return 0;
}
