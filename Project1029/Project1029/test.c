#define _CRT_SECURE_NO_WARNINGS
#include "Seqlist.h"

void Test1()
{
	SL s1;
	SLInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SLprint(&s1);
	SeqListPushFront(&s1, 10);
	SeqListPushFront(&s1, 20);
	SeqListPushFront(&s1, 30);
	SLprint(&s1);
	SLDesroy(&s1);
}

void Test2()
{
	SL s1;
	SLInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SLprint(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	SeqListPopBack(&s1);
	//SeqListPopBack(&s1);//测试assert
	SLprint(&s1);
	SLDesroy(&s1);
}
int main()
{
	//Test1();
	Test2();
}

//越界报错
//越界读通常不会报错
//printf("%d", a[10])
//越界写会报错
//a[10] = 1
//不同编译器对于越界不一样
//所以越界不一定报错，越界是抽查，就像查酒驾一样。
