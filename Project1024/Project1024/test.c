#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <errno.h>
//int main()
//{
//	int ch = 0;
//	ch = fgetc(stdin);//���ص��Ƕ�ȡ�ַ���ASCII��ֵ
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
//	fputs("����\n", pf);
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
//	fgets(arr, 5, pf);//�Ž�ȥ4������'\0',��һ��
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

//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return 1;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//���ݽṹ�Ǽ�����洢����֯���ݵķ�ʽ��
//˳���ĸ���,˳��������Ա��һ�֣����Ա�ָ���Ǿ�����ͬ���Ե�һ�����ݽṹ��ͳ�ƣ��߼��ṹ�������Եģ�����ṹ��һ�������Եģ��洢�ṹ��
//˳���ĵײ��߼������飬���߼��ṹ�ʹ洢�ṹ�����������С�

int main()
{
	int i = 0;

}