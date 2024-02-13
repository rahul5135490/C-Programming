#include<stdio.h>
#include<conio.h>
int power(int b,int e)
{
int r=1,i;
if(e<0)
return 0;
for(i=1;i<=e;i++)
r=r*b;
return r;
}
main()
{
	int a,b,p;
	printf(" enter value of a:");
	scanf("%d",&a);
	printf(" enter value of b:");
	scanf("%d",&b);
	p=power(a,b);
	printf("\n %d^%d value=%d",a,b,p);
	getch();
}
