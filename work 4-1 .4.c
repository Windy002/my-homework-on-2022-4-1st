#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0,t=0;
	scanf("%d", &t);
	putchar('\n');
	for (i = 0; i < (t + 1)/2 ; i++)  //��һ��for��ӡ���ε��ϰ벿��
	{
		int j =0;
		for (j = 0; j < (t - 1) / 2 - i; j++)
		{
			putchar(' ');  // ��ӡ�ո�
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			putchar('*'); // ��ӡͼ��
		}
		putchar('\n');
	}

	for (i = 0; i < (t - 1) / 2; i++) //�ڶ���for��ӡ�°벿��
	{
		int j = 0;
		for (j = 0; j < i + 1; j++) 
		{
			putchar(' ');   // ��ӡ�ո�
		}
		for (j = 0; j < t-2-2*i; j++)
		{
			putchar('*');  // ��ӡͼ��
		}
		putchar('\n');
	}
	return 0;
}