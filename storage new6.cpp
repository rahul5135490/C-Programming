#include<stdio.h>
#include<conio.h>
void abc()
{
	int a=5;
	static int p=7;
	++a;
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

