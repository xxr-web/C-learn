#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main()
{
	char i = 0;
	for (i = 0; i < 128; i++)
	{
		printf("╪ссм\n");
		Sleep(1000);
	}
	return 0;
}