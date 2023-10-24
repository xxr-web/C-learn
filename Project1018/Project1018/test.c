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
//
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

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到⽂件（磁盘）
//	//注：fflush 在⾼版本的VS上不能使⽤了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭⽂件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	ch = fgetc(stdin);//返回的是读取字符的ASCII码值
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.txt", "r");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = 0;
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%c\n", ch);
//	ch = fgetc(fp);
//	printf("%d\n", ch);
//	return 0;
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
//	fputc(65, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
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
//	fputs("abc\n", pf);
//	fputc(65, pf);
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
//	char arr1[20] = { '\0' };
//	char arr2[20] = { '\0' };
//	char arr3[20] = { '\0' };
//	fgets(arr, 5, pf);//放进去4个，加'\0',读一行
//	printf("%s", arr);
//	fgets(arr1, 5, pf);
//	printf("%s", arr1);
//	fgets(arr2, 10, pf);
//	printf("%s", arr2);
//	fgets(arr3, 4, pf);
//	printf("%s", arr3);
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
//	struct S stu = { 1, 'a', "abc" };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%d %c %s", stu.i, stu.a, stu.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S stu = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
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
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	rewind(pFile);
//	long int a = ftell(pFile);
//	fputs(" sam", pFile);
//	fclose(pFile);
//	pFile = NULL;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	FILE* fp = fopen("test.txt", "w");
//	if (fp == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abc\n", fp);
//	fputs("hello world\n", fp);
//	fputs("123\n", fp);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* fpread = fopen("test.txt", "r");
//	if (fpread == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	FILE* fpwrite = fopen("test1.txt", "w");
//	if (fpwrite == NULL)
//	{
//		perror("fopen");
//		fclose(fpread);
//		fpread = NULL;
//		return 1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(fpread)) != -1)
//	{
//		fputc(ch, fpwrite);
//	}
//	return 0;
//	fclose(fpread);
//	fclose(fpwrite);
//	fpread = NULL;
//	fpwrite = NULL;
//	return 0;
//}

int main(void)
{
	int c; // 注意：int，非char，要求处理EOF
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed");
		return 1;
	}
	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}






