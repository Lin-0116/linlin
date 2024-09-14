//
// Created by cp on 2024/9/14.
//
#include "SeqList.h"
void menu()
{
    printf("**************通讯录****************\n");
    printf("*****1.增加联系人    2.删除联系人*****\n");
    printf("*****3.修改联系人    4.查找联系人*****\n");
    printf("*****5.展示通讯录    0.退出通讯录*****\n");
    printf("***********************************\n");
}

int main()
{
    int num=0;
    Contact con;
    ContactInit(&con);
    do{
        menu();
        printf("请选择要进行的操作：\n");
        scanf("%d",&num);
        switch (num) {
            case 1:
                ContactAdd(&con);
                break;
            case 2:
                ContactDel(&con);
                break;
            case 3:
                ContactModify(&con);
                break;
            case 4:
                ContactFind(&con);
                break;
            case 5:
                ContactShow(&con);
                break;
            case 0:
                printf("退出通讯录\n");
                break;
            default:
                printf("输入错误，请重新输入！\n");
                break;
        }

    }
    while(num);
    ContactDesTroy(&con);

    return 0;
}
