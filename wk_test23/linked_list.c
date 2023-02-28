#define  _CRT_SECURE_NO_WARNINGS 1

#include "node.h"
#include <stdio.h>
#include<stdlib.h>

//Node* head;//ȫ�ֱ������к���

//����4������ͷָ���ָ��
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
			//head = add(head,number);//����2
			add(&list, number);//����3������head��ָ��
		}
	} while (number != -1);
	print(&list);
	//���������
	scanf("%d",&number);
	Node* p;
	int isFound = 0;
	for ( p = list.head; p ; p=p->next)
	{
		if (p->value == number) {
			printf("�ҵ���\n");
			isFound = 1;
			break;
		}
	}

	if (!isFound)
	{
		printf("û�ҵ�\n");
	}

	//�������ɾ��
	Node* q;

	for (q=NULL,p = list.head; p; q=p,p = p->next)
	{
		if (p->value == number) {
			if (q)//���q����
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

	//��������
	for ( p = list.head; p ; p=q)
	{
		q = p->next;
		free(p);
	}
	return 0;
}

//Node* add(Node* head, int number) {
//Node* add(Node** pHead, int number) {//head��ָ���ָ��
void add(List* pList,int number){ //pList��һ��ָ��
	//add to linked-list
	Node* p = (Node*)malloc(sizeof(Node));//ָ��ָ���µĿռ�
	//��p��ָ���¿ռ���г�ʼ��
	p->value = number;
	p->next = NULL;//�µ�һ��ָ�룬�����ģ�����ָ��NULL
	//find the last
	Node* last = pList -> head; //����Ҫ�õ�head�ĵط��ĳ�*pHead
	//lastһ��ʼ����ͷָ��
	if (last) //���last�ж���������ͷָ���ʱ�����
	{
		while (last->next) //last����һ��ָ���ж�����ָ����һ����ֱ��ΪNULLͣ����
		{
			last = last->next;
		}
		//attach
		last->next = p;
	}
	else //���last = head������ͷָ��ʱ���Ͱ�head=p����������һ����㣬������ȫ����ֻ��һ��ָ��
	{
		//head = p; //���Ǻ�����head���޸Ķ�main�����head����
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
