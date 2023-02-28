#define  _CRT_SECURE_NO_WARNINGS 1
#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node
{
	int value;
	struct _node* next; //指针，下一个指向的还是它这样的结构变量
} Node;

#endif // !_NODE_H_

