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
int PushStack(LinkStack top, char e)//进栈操作
{
	LStackNode* p = (LStackNode*)malloc(sizeof(LStackNode));
	p = (LStackNode*)malloc(sizeof(LStackNode));
	if (p == NULL)
	{
		printf("内存分配失败");
		exit(-1);
	}
	p->data = e;
	p->next = top->next;
	top->next = p;

	return 1;
}
//出栈操作
int PopStack(LinkStack top, char *e)
{
	LStackNode *p;
	p = top->next;
	if (!p)
	{
		printf("已经是空战");
		return -1;
	}

	top->next = p->next;
	*e = p->data;
	free(p);
	return 1;
}
//取栈顶操作
LStackNode* GetTop(LinkStack top)
{
	LStackNode *p;
	p = top->next;
	if (!p)
	{
		printf("已经是空栈");
		return NULL;
	}

	return p;
}
//求表长
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
//销毁链栈
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
