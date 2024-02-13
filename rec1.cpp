#include<stdio.h>
#include<conio.h>
void abc()
{
	int a;
	static int s=3;
	a=++s;
	printf("\n %d %d",a,s);
	if(a<=6)
	abc();
	printf("\n %d %d",a,s);
}
main()
{
	abc();
	abc();
	getch();
}
