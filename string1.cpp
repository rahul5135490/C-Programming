#include<stdio.h>
#include<conio.h>
void mystrcopy(char*dest,const char*src)
{
	while(*src!='\0')
	{
		*dest=*src;
		++dest;
		++src;
	}
	*dest='\0';
}
main()
{
	char s1[10]="welcome";
	char s2[10]="hello";
	puts(s1);
	puts(s2);
	mystrcopy(s1,s2);
	puts(s1);
	puts(s2);
	getch();
}
