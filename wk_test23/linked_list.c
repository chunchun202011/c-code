#define  _CRT_SECURE_NO_WARNINGS 1

#include "node.h"
#include <stdio.h>
#include<stdlib.h>

//Node* head;//全局变量是有害的

//方案4：定义头指针的指针
typedef struct _list {
	Node* head;
} List;

void add(Node* head, int number);

int main(int argc,char const *argv[]) {
	//Node* head = NULL;
	List list;
	int number;
	list.head = NULL;
	do
	{
		scanf("%d",&number);
		if (number != -1)
		{
			//head = add(head,number);//方案2
			add(&list, number);//方案3：传递head的指针
		}
	} while (number != -1);
	print(&list);
	//链表的搜索
	scanf("%d",&number);
	Node* p;
	int isFound = 0;
	for ( p = list.head; p ; p=p->next)
	{
		if (p->value == number) {
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}

	if (!isFound)
	{
		printf("没找到\n");
	}

	//链表结点的删除
	Node* q;

	for (q=NULL,p = list.head; p; q=p,p = p->next)
	{
		if (p->value == number) {
			if (q)//如果q存在
			{
				q->next = p->next;
			}
			else {
				list.head = p->next;
			}
			free(p);
			break;
		}
	}

	//链表的清除
	for ( p = list.head; p ; p=q)
	{
		q = p->next;
		free(p);
	}
	return 0;
}

//Node* add(Node* head, int number) {
//Node* add(Node** pHead, int number) {//head的指针的指针
void add(List* pList,int number){ //pList是一个指针
	//add to linked-list
	Node* p = (Node*)malloc(sizeof(Node));//指针指到新的空间
	//对p所指的新空间进行初始化
	p->value = number;
	p->next = NULL;//新的一个指针，是最后的，所以指向NULL
	//find the last
	Node* last = pList -> head; //所有要用到head的地方改成*pHead
	//last一开始等于头指针
	if (last) //如果last有东西：不是头指针的时候才行
	{
		while (last->next) //last的下一个指针有东西：指向下一个，直到为NULL停下来
		{
			last = last->next;
		}
		//attach
		last->next = p;
	}
	else //如果last = head：等于头指针时，就把head=p，这样它有一个结点，而不是全链表只有一个指针
	{
		//head = p; //但是函数里head的修改对main里面的head无用
		pList->head = p;
	}
	//return head;
	return pList->head;
}

void print(List *pList){
	Node* p;
	for ( p = pList -> head; p ; p=p->next)
	{
		printf("%d\t",p->value);
	}
	printf("\n");
}
