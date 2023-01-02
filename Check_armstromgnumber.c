#include<stdio.h>
#include<math.h>

int main()
{
 int l=0,m=0,j,k,v=0,n;
 printf("Enter a number");
 scanf("%d",&n);
 j=n;
 
 while(n!=0)
 {
  k=n%10;
  
  v++;
  n=n/10;
 }
 n=j;
 while (n>0)
 {
  k=n%10;
  m=pow(k,v);
  l=l+m;
  n=n/10;
 }
 if(j==l)
 printf("ARMSTRONG NUMBER");
 
// if(j!=l)
     else
 printf("NOT ARMSTRONG NO.");
 
 return 0;
}
