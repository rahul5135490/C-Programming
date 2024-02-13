#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20;
	printf("\n %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n %d %d",a,b);
	getch();
}
