#pragma once
/*
链式栈
	先进后出
	基本运算
		初始化
		判定链栈是否为空
		进栈操作
		出栈操作
		取栈顶操作
		求表长操作
		销毁链栈操作

*/
#ifndef _LinkedStack_H_
#define _LinkedStack_H_
#include "stdlib.h"
#include "stdio.h"
//定义链栈的结构
struct node
{
	char data;
	struct node *next;
};

typedef struct node LStackNode;//节点
typedef struct node *LinkStack;//栈

//初始化
void InitStack(LinkStack *top);

//判定是否为空
bool StackEmpty(LinkStack top);

int PushStack(LinkStack top, char e);//进栈操作

int PopStack(LinkStack top, char *e);//出栈操作

LStackNode* GetTop(LinkStack top);//取栈顶操作

int StackLength(LinkStack* top);//求表长

void Destroy(LinkStack* top);//销毁链栈





#endif // !_LinkedStack_H_


