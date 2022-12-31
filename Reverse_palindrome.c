#include<stdio.h>
int main()
{
int num,number,reverse,modulo=0;
printf("\n Enter any integer\n");
scanf("%d",&number);
num=number;
while(num!=0)
{
modulo=num%10;
reverse=reverse*10+modulo;
num/=10;
}
//reverse number
printf("\n THE REVERSE NUMBER IS %d\n,reverse);
//palindrome number checking
if(number==reverse)
printf("YES IT IS A PALINDROME NUMBER\n");
else
printf("NO IT IS NOT A PALINDROME NUMBER\n");
return 0;
}
