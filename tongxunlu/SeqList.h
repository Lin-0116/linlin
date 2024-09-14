//
// Created by cp on 2024/9/14.
//

#ifndef LINLIN_SEQLIST_H
#define LINLIN_SEQLIST_H

#endif //LINLIN_SEQLIST_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Contact.h"
typedef peoInfo SLDataType;//将int重命名为SLDataType,使int类型可变
typedef struct SeqList
{
    SLDataType *arr;
    int size;//数据个数
    int capacity;//空间大小
}SL;
void SLInit(SL*ps);//初始化
void SLCheckCapacity(SL*ps);//检查是否有空间
void SLPushBack(SL*ps,SLDataType x);//尾插
void SLPushFront(SL*ps,SLDataType x);//头插
void SLPopBack(SL*ps);//尾删
void SLPopFront(SL*ps);//头删
void SLInsert(SL*ps,SLDataType pos,SLDataType x);//指定位置前插入数据
void SLDelete(SL*ps,int pos);//指定位置删除数据
//int SLFind(SL*ps,SLDataType x);//查找数据
void SLDestroy(SL*ps);//销毁
//void Print(SL s);//打印