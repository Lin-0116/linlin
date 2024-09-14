//
// Created by cp on 2024/9/14.
//

#include "SeqList.h"
void SLInit(SL*ps) //初始化
{
    ps->arr=NULL;
    ps->size=0;
    ps->capacity=0;
}

void SLCheckCapacity(SL*ps)
{
    if(ps->size==ps->capacity)
    {
        int NewCapacity=ps->capacity==0?4:ps->capacity*2;
        SLDataType *tmp=(SLDataType*) realloc(ps->arr,NewCapacity*sizeof(SLDataType));
        if(tmp==NULL)
        {
            perror("realloc fail");
            exit(1);
        }
        ps->arr=tmp;
        ps->capacity=NewCapacity;
    }
}

void SLPushBack(SL*ps,SLDataType x)//尾插
{
    assert(ps);
    SLCheckCapacity(ps);
    ps->arr[ps->size++]=x;
}

void SLPushFront(SL*ps,SLDataType x)
{
    assert(ps);
    SLCheckCapacity(ps);
    for(int i=ps->size;i>=0;i--)
    {
        ps->arr[i+1]=ps->arr[i];//arr[1]=arr[0]
    }
    ps->arr[0]=x;
    ps->size++;
}

void SLPopBack(SL*ps)
{
    assert(ps);
    assert(ps->size);
    --ps->size;
}

void SLPopFront(SL*ps)
{
    assert(ps);
    assert(ps->size);
    for(int i=0;i<ps->size-1;i++)//整体往前移一位
    {
        ps->arr[i]=ps->arr[i+1];//
    }
    ps->size--;
}


/*void SLInsert(SL*ps,SLDataType pos,SLDataType x)
{
    assert(ps);
    assert(pos>=0 && pos<=ps->size);
    SLCheckCapacity(ps);
    for(int i=ps->size;i>=pos;i--)
    {
        ps->arr[i+1]=ps->arr[i];//pos~size整体往后移一位   pos+1=pos
    }
    ps->size++;
    ps->arr[pos]=x;
}*/

void SLDelete(SL*ps,int pos)
{
    assert(ps);
    assert(pos>=0 && pos<ps->size);
    for(int i=pos;i<=ps->size-1;i++)
    {
        ps->arr[i]=ps->arr[i+1];//pos+1整体往前移一位，覆盖pos以Delete   size-1=size
    }
    ps->size--;
}

/*int SLFind(SL*ps,SLDataType x)
{
    assert(ps);
    for(int i=0;i<ps->size;i++)
    {
        if(x==ps->arr[i])
        {
            return i;
        }
    }
    return -1;

}
 */

void SLDestroy(SL*ps)//销毁
{
    if(ps->arr)
    {
        free(ps->arr);
    }
    ps->arr=NULL;
    ps->size=0;
    ps->capacity=0;
}

/*
void Print(SL s)
{
    int i=0;
    for(i=0;i<s.size;i++)
    {
        printf("%d ",s.arr[i]);
    }
    printf("\n");
}
*/
