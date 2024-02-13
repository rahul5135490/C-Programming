#include<stdio.h>
#include<conio.h>
# define size 10
main()
{
	int arr[size],i,sum=0;
	float Avg;
	printf("enter %d values",size);
	for(i=0;i<size;i++)
	scanf("%d",& arr[i]);
	// logic
	for(i=0;i<size;i++)
	sum=sum+arr[i];
	Avg=(float)sum/size;
	printf("\n sum of list=%d",sum);
	printf("\n Avg of list=%f",Avg);
	getch();
}
