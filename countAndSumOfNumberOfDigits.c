             //QUESTION: Write a program to input a number and then count the number of digits present in the number using while loop
// SOURCE: INTERNSHALA
// AUTHOR: ANSHIKA AGGARWAL

                                              // SOLUTION:[USING WHILE LOOP]
#include<stdio.h>
void main()
{
int num,number,digit,sum=0,count=0;
printf("\t ENTER THE NUMBER TO COUNT THE NUMBER OF DIGITS PRESENT INSIDE THE ENTERED NUMBER\n");
scanf("%d",&number);
num=number;
while(number!=0)
{
digit=number%10;
sum+=digit;
count++;
number/=10;
}
 
//FOR SUM OF DIGITS
printf("\tSUM OF DIGITS OF %d IS %d\n",num,sum);
  
//FOR COUNTING
printf("\tTOTAL NUMBER OF DIGITS IN %d IS %d\n",num,count);
}
