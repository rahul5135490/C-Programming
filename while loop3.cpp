#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	while(i<=10)
	{
		printf("%d\t",i);
		if(i>=3)
		break;
		i=i+1;
	}
	getch();
}
