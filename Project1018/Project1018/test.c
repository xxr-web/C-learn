#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//int main()
//{
//	int ch = fgetc(stdin);//fgetc适用所有输入流，stdin是标准输入流，此时作用等于getchar
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = fgetc(pf);//自己就向下走了
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	ch = fgetc(pf);
//	printf("%d\n", ch);//文件结尾EOF就是-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//文件拷贝
//int main()
//{
//
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("Hello World\n", pf);
//	fputs("加油\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20] = { '\0' };
//	//fgets(arr, 20, pf);
//	fgets(arr, 5, pf);//放进去4个，加'\0',读一行
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//struct S
//{
//	int i;
//	char a;
//	char arr[20];
//};
//
//int main()
//{
//	struct S stu = { 1, 'a', "abc"};
//	//FILE* pf = fopen("test.txt", "w");
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//fprintf(pf, "%d %c %s", stu.i, stu.a, stu.arr);
//	fscanf(pf, "%d %c %s", &(stu.i), &(stu.a), &(stu.arr));
//	printf("%d %c %s", stu.i, stu.a, stu.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7 };
//	FILE* fp = fopen("test.txt", "wb");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fwrite(arr, sizeof(int), 7, fp);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if(pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fread(arr, sizeof(int), 7, pf);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "w");
//	fputs("This is an apple.", pFile);
//	fclose(pFile);
//	pFile = NULL;
//	FILE* fp = fopen("example.txt", "r");
//	fseek(fp, 9, SEEK_SET);
//	int ch = fgetc(fp);
//	printf("%c\n", ch);
//	int i = ftell(fp);
//	printf("%d\n", i);
//	rewind(fp);
//	int ch1 = fgetc(fp);
//	printf("%c\n", ch1);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("example.txt", "r");
//	fseek(fp, 9, SEEK_SET);
//	int ch = fgetc(fp);
//	printf("%c\n", ch);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//先将代码放在输出缓冲区
	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
	Sleep(10000);
	printf("刷新缓冲区\n");
	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘）
	//注：fflush 在⾼版本的VS上不能使⽤了
	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
	Sleep(10000);
	fclose(pf);
	//注：fclose在关闭⽂件的时候，也会刷新缓冲区
	pf = NULL;
	return 0;
}

