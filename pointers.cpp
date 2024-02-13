#include<stdio.h>
int main(){
	int age=22;
	int *ptr=&age;
	int _age=*ptr;
	printf("%d",_age);
	printf("%p",&age);
	printf("%u",&age);
	return 0;
}
