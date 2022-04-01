#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int times = 0;
	int i = 0;s
	scanf("%d", &times);
	for (i = 0; i < times; i++)
	{
		
		int j = 0;
		for (j = 0; j<times - i-1; j++)
		{
			putchar(' ');
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}