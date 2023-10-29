#pragma once
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;
typedef struct Seqlist
{
	int* a;
	int size;//��Ч����
	int capcity;//�ռ��ж��
}SL;

void SLInit(SL* ps1);
void SLDesroy(SL* ps1);

// ˳���β��
void SeqListPushBack(SL* psl, SLDataType x);
// ˳���βɾ
void SeqListPopBack(SL* psl);
// ˳���ͷ��
void SeqListPushFront(SL* psl, SLDataType x);
// ˳���ͷɾ
void SeqListPopFront(SL* psl);

void SLprint(SL* ps1);
void capcitycheck(SL* ps1);

void SLInsert(SL* ps1, int pos, SLDataType x);

void SLErase(SL* ps1, int pos);
