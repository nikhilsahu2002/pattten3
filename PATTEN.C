#include<stdio.h>
#include<conio.h>

int i,j,count=1;
/*
void patten()
{

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}

}         */
void patten2()
{
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
void patten3()
{

	for(i=0;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",count);
			count++;
		}
		printf("\n");
	}

}

void main()
{
clrscr();
patten3();
}