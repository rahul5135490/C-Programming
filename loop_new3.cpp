#include<stdio.h>
#include<conio.h>
main()
{
	int i=2;
	while(i<=20)
	{
		printf("%d\t",i);
		if(i>=10)
		break;
		i=i+2;
	}
	getch();
}
