#include<stdio.h>
#include<stdlib.h>
int main()
{
 // CHECKING WHETHER PRIME NUMBER OR NOT
  int prime,number,turns,flag=0;
  printf("\t ENTER ANY INTEGER \n");
  scanf("%d",&number);
  for(turns=2;turns<number;turns++)// you can compare turns<number/2 as well.
  {
    if(number%turns==0)
    {
      printf("\t NOT A PRIME NUMBER\n);
      flag=1;
      break;
    }
 }
 if(flag==0)
 printf("\t PRIME NUMBER\n");
 return 0;
 }
 
