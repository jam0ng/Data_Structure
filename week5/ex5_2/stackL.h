#pragma once
typedef int element;		//���� ����(element)�� �ڷ����� int�� ����

typedef struct stackNode {	//������ ��带 ����ü�� ����
	element data;
	struct stackNode* link;
} stackNode;

stackNode* top;				//������ top ��带 �����ϱ� ���� ������ top ����

int isStackEmpty(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);