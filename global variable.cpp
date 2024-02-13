#include<stdio.h>
#include<conio.h>
int g;//global variable
void abc()
{
	++g;
}
void xyz()
{
	++g;
}
main()
{
	++g;
	abc();
	xyz();
	printf("%d",g);
	getch();
}
