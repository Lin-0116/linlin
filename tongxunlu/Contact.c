//
// Created by cp on 2024/9/14.
//
#include "SeqList.h"
#include "Contact.h"
void ContactInit(Contact*con)//通讯录初始化
{
    SLInit(con);
}

void ContactDesTroy(Contact*con)//通讯录的销毁
{
    SLDestroy(con);
}

void ContactAdd(Contact*con)//通讯录的增加
{
    peoInfo Info;
    printf("请输入增加的联系人姓名：\n");
    scanf("%s",Info.name);
    printf("请输入增加的联系人性别：\n");
    scanf("%s",Info.gender);
    printf("请输入增加的联系人年龄：\n");
    scanf("%d",&Info.age);
    printf("请输入增加的联系人电话：\n");
    scanf("%s",Info.phone);
    printf("请输入增加的联系人地址：\n");
    scanf("%s",Info.address);

    SLPushBack(con,Info);
    printf("增加成功！\n");
}

int FindByName(Contact*con,char name[])
{
    for(int i=0;i<con->size;i++)
    {
        if(0==strcmp(con->arr[i].name,name))
        {
            return i;//找到了
        }
    }
    return -1;
}

void ContactDel(Contact*con)//通讯录的删除
{
    char name[Max_name];
    printf("请输入要删除人的姓名；\n");
    scanf("%s",name);
    int find=FindByName(con,name);
    if(find<0)
    {
        printf("要删除的联系人不存在！\n");
        return;
    }
    SLDelete(con,find);
    printf("删除成功！\n");
}

void ContactModify(Contact*con)//通讯录的修改
{
    char name[Max_name];
    printf("请输入要修改的联系人姓名：\n");
    scanf("%s",name);
    int find=FindByName(con,name);
    if(find<0)
    {
        printf("要删除的联系人不存在！\n");
        return;
    }
    //修改
    printf("请输入修改为的联系人姓名：\n");
    scanf("%s",con->arr[find].name);
    printf("请输入修改为的联系人性别：\n");
    scanf("%s",con->arr[find].gender);
    printf("请输入修改为的联系人年龄：\n");
    scanf("%d",&con->arr[find].age);
    printf("请输入修改为的联系人电话：\n");
    scanf("%s",con->arr[find].phone);
    printf("请输入修改为的联系人地址：\n");
    scanf("%s",con->arr[find].address);
    printf("修改成功！\n");
}

void ContactFind(Contact*con)//通讯录的查找
{
    char name[Max_name];
    printf("请输入要查找的联系人姓名：\n");
    scanf("%s",name);
    int find=FindByName(con,name);
    if(find<0)
    {
        printf("要查找的联系人不存在！\n");
        return;
    }
    //查找
    printf("姓名 性别 年龄 电话 地址\n");
    printf("%3s %3s %3d %3s %3s\n",con->arr[find].name,con->arr[find].gender,con->arr[find].age,con->arr[find].phone,con->arr[find].address);
    printf("查找成功！\n");
}


void ContactShow(Contact*con)//通讯录的展示
{
    printf("姓名 性别 年龄 电话 地址\n");
    for (int i = 0; i < con->size; i++) {
        printf("%3s %3s %3d %3s %3s\n", con->arr[i].name, con->arr[i].gender, con->arr[i].age, con->arr[i].phone,
               con->arr[i].address);
    }
}