//QUESTION: Write a program to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series, where 'n' is the user input.
// SOURCE: INTERNSHALA
// AUTHOR: ANSHIKA AGGARWAL

//SOLUTION:
#include<stdio.h>
void main()
{
  int number,newNumber,numberOfTurns=1,sum=0;
  printf("\t ENTER THE NUMBER YOU WISH TO GET THE SUM OF SERIES\n);
  scanf("%d";&number);
  while(numberOfTurns<=number)
  {
    newNumber=numberOfTurns*numberOfTurns;
    sum+=newNumber;
    numberOfTurns++;
  }
printf("\t Sum of Series is %d\n",sum);
}
           
