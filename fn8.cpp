#include<stdio.h>
#include<conio.h>
void abc()
{
	printf(" A ");
}
void xyz()
{
	printf(" B ");
	abc();
}
main()
{
	abc();
	xyz();
	getch();
}
