#include<stdio.h>
#include<conio.h>
void abc()
{
	int a;
	static int s;
	a=s++;
	printf("\n %d %d",a,s);
	if(a<=3)
	abc();
	printf("\n %d %d",a,s);
}
main()
{
	abc();
	abc();
	getch();
}
