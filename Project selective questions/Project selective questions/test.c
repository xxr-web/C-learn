#define _CRT_SECURE_NO_WARNINGS
// 1.��ӡ1-100�������
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 101; i++)
	{
		if ((i % 2) != 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}