#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//struct Stu
//{
//	int i;
//	int arr1[0];
//};
//int main()
//{
//	struct Stu* p = (struct Stu*)malloc(sizeof(struct Stu) + 10 * sizeof(int));
//	int i = 0;
//	if (p == NULL)
//	{
//		perror("malloc");
//	}
//	p->i = 10;
//	printf("%d\n", p->i);
//	for (i = 0; i < 10; i++)
//	{
//		p->arr1[i] = i;
//		printf("%d ", p->arr1[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}