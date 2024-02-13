#include<stdio.h>
#include<conio.h>
extern int g;
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
int g;
