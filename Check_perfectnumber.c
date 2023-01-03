#include<stdio.h>
#include<conio.h>

//PROGRAM FOR PERFECT NUMBER

int main()
{
	clrscr();
	int i,num,sum=0,k;
	printf("Enter a number");
	scanf("%d",&num);
	//printf("factors of entered no. %d are\n",num);
	for(i=1;i<num;++i)
	{
		k=num%i;
		if(k==0)
		{
			//printf("%d \n",i);
			sum=sum+i;
		
		}		
	}
	if(sum==num)
	printf("perfect no.");
	else
	printf("Not a perfect no.");
	
	getch();
	return 0;
	
}
