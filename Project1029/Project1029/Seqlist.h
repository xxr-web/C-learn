#pragma once
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct Seqlist
{
	int* a;
	int size;//有效数据
	int capcity;//空间有多大
}SL;

void SLInit(SL* ps1);
void SLDesroy(SL* ps1);

// 顺序表尾插
void SeqListPushBack(SL* psl, SLDataType x);
// 顺序表尾删
void SeqListPopBack(SL* psl);
// 顺序表头插
void SeqListPushFront(SL* psl, SLDataType x);
// 顺序表头删
void SeqListPopFront(SL* psl);

void SLprint(SL* ps1);
void capcitycheck(SL* ps1);

void SLInsert(SL* ps1, int pos, SLDataType x);

void SLErase(SL* ps1, int pos);
