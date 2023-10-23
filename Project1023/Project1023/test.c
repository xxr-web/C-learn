#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a = 100;
//	printf("%o", a);
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	int a = 100;
//	FILE* fp = fopen("test.txt", "wb");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(&a, 4, 1, fp);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test1.txt", "r");
//	/*if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}*/
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

#include <windows.h>
//VS2019 WIN11环境测试
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt⽂件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
	//注：fflush 在高版本的VS上不能使⽤了
	printf("再睡眠10秒-此时，再次打开test.txt⽂件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭文件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}
