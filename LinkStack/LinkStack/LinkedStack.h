#pragma once
/*
��ʽջ
	�Ƚ����
	��������
		��ʼ��
		�ж���ջ�Ƿ�Ϊ��
		��ջ����
		��ջ����
		ȡջ������
		�������
		������ջ����

*/
#ifndef _LinkedStack_H_
#define _LinkedStack_H_
#include "stdlib.h"
#include "stdio.h"
//������ջ�Ľṹ
struct node
{
	char data;
	struct node *next;
};

typedef struct node LStackNode;//�ڵ�
typedef struct node *LinkStack;//ջ

//��ʼ��
void InitStack(LinkStack *top);

//�ж��Ƿ�Ϊ��
bool StackEmpty(LinkStack top);

int PushStack(LinkStack top, char e);//��ջ����

int PopStack(LinkStack top, char *e);//��ջ����

LStackNode* GetTop(LinkStack top);//ȡջ������

int StackLength(LinkStack* top);//���

void Destroy(LinkStack* top);//������ջ





#endif // !_LinkedStack_H_


