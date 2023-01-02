#include<stdio.h>
int main()
{
   int number,term,sum=2,turns,first=1,second=1;
   printf("\tENTER ANY INTEGER\n");
   scanf("%d",&number);
   printf("\t%d\n \t %d\n",first,second);
   for(turns=3;turns<=number;turns++)
   { 
        term=first+second;
	printf("\t %d\n",term);
	first=second;
	second=term;
	sum+=term;
   }
   printf("\t SUM OF FIBONACCI SERIES IS %d\n",sum);
return 0;
}
