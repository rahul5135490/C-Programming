#include <stdio.h>
#include <conio.h>
extern int g;
void abc()
{
	int a;
	static int s=5;
	a=s--;
	++g;
	printf("\n %d %d %d",a,s,g);
	if(a>=3)
	abc();
	printf ("\n %d %d %d",a,s,g);
}
main()
{
	abc();
	abc();
	getch();
}
int g;
