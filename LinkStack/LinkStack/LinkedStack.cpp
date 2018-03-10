#include "LinkedStack.h"

void InitStack(LinkStack* top)
{
	*top = (LinkStack)malloc(sizeof(LStackNode));
	if (top==NULL)
	{
		exit(-1);
	}

	(*top)->next = NULL;
}
bool StackEmpty(LinkStack top)
{
	if (top->next == NULL)
		return true;
	else
		return 0;

}
int PushStack(LinkStack top, char e)//��ջ����
{
	LStackNode* p = (LStackNode*)malloc(sizeof(LStackNode));
	p = (LStackNode*)malloc(sizeof(LStackNode));
	if (p == NULL)
	{
		printf("�ڴ����ʧ��");
		exit(-1);
	}
	p->data = e;
	p->next = top->next;
	top->next = p;

	return 1;
}
//��ջ����
int PopStack(LinkStack top, char *e)
{
	LStackNode *p;
	p = top->next;
	if (!p)
	{
		printf("�Ѿ��ǿ�ս");
		return -1;
	}

	top->next = p->next;
	*e = p->data;
	free(p);
	return 1;
}
//ȡջ������
LStackNode* GetTop(LinkStack top)
{
	LStackNode *p;
	p = top->next;
	if (!p)
	{
		printf("�Ѿ��ǿ�ջ");
		return NULL;
	}

	return p;
}
//���
int StackLength(LinkStack top)
{
	int i = 0;
	LStackNode  *p = top;
	while (p->next)
	{
		i++;
		p = p->next;
	}

	return i;
}
//������ջ
void Destroy(LinkStack top)
{
	LStackNode* p, *q;
	p = top;
	while (!p)
	{
		q = p;
		p = p->next;
		free(q);
	}
}
