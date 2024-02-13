#include<stdio.h>
#include<conio.h>
void abc()
{
	int a=10;
	static int p;
	--a;
	++p;
	printf("\n %d %d",a,p);
}
main()
{
	abc();
	abc();
	abc();
	getch();
}

