//
// Created by cp on 2024/9/14.
//

#ifndef LINLIN_CONTACT_H
#define LINLIN_CONTACT_H

#endif //LINLIN_CONTACT_H

#pragma once
#define Max_name 20
#define Max_gender 5
#define Max_phone 15
#define Max_add 50
//姓名 性别 年龄 电话 地址
typedef struct personInfo
{
    char name[Max_name];
    char gender[Max_gender];
    int age;
    char phone[Max_phone];
    char address[Max_add];
}peoInfo;
//给顺序表改个名字，叫做通讯录
typedef struct SeqList Contact;

void ContactInit(Contact*con);//通讯录初始化
void ContactDesTroy(Contact*con);//通讯录的销毁
void ContactAdd(Contact*con);//通讯录的增加
void ContactDel(Contact*con);//通讯录的删除
void ContactModify(Contact*con);//通讯录的修改
void ContactFind(Contact*con);//通讯录的查找
void ContactShow(Contact*con);//通讯录的展示

