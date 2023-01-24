

            //QUESTION: Write a program to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series, where 'n' is the user input.
// SOURCE: INTERNSHALA
// AUTHOR: ANSHIKA AGGARWAL

                                                          //SOLUTION:
                  //METHOD 1: USING WHILE LOOP
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
           
                  //METHOD 2: USING FOR LOOP
#include <stdio.h>
int main() {

    int n;
    long sum = 0;        // The sum could be a very long integer value. 

    puts("Enter n: ");    // User input. 
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + (i * i);    // The value ‘i’ will increase by 1 with each iteration. 
    }

    printf("Sum: %ld", sum);    // Print the sum. 

    return 0;
}
