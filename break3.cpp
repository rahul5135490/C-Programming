#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	while(i<=15)
	{
		printf("%d\t",i);
		if(!i)
		break;
		i=i+2;
	}
	getch();
}
