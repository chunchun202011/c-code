#define  _CRT_SECURE_NO_WARNINGS 1

#include "array.h"
#include<stdio.h>
#include<stdlib.h>

const BLOCK_SIZE = 20;	

//typedef struct {
//	int* array;
//	int size;
//} Array;

//�ں�������һʵ��
Array array_create(int init_size) {
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int) * a.size);
	return a;
}

void array_free(Array* a) {
	//array������ָ����ָ�Ķ���������Ҫ����һ��free
	free(a->array);
	//�����������free 0,NULL���޺���
	a->array = NULL;
	a->size = 0;
}

//��װ,��a��size��������
int array_size(const Array* a) {
	return a->size;
}

//���ز���Ԫ�����ڵ�λ�ã�����ָ��
int* array_at(Array* a, int index) {
	//���array_atԽ����
	if (index >= a->size)
	{
		// index / Block_size:λ���ĸ�block��ͷ��+1��block��1��ʼ�������
		//����blocksize�ټ�ȥa.size
		array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);//ÿ�ζ��һ��
	}
	return &(a->array[index]);//����a��ָ��
}
//��������ص�ָ�룺get��set����
int array_get(const Array *a,int index) {
	return a->array[index];
}
void array_set(Array* a, int index, int value) {
	a->array[index] = value;
}

//������ô����
//�����ÿ⺯���ı�׼������ѭ��Ч�ʸ���
void array_inflate(Array* a, int more_size) {
	int* p = (int*)malloc(sizeof((int)(a->size + more_size)));
	int i;
	for ( i = 0; i < a->size; i++)
	{
		p[i] = a->array[i];
	}
	free(a->array);
	a->array = p;
	a->size += more_size;

}

int main(int argc,char const *argv[]) {
	Array a = array_create(100);

	//���a�Ĵ�С
	printf("%d\n",array_size(&a));//������a��size
	printf("%d\n",a.size);

	//����ָ��ĺô�������ֵû�ж���������ֱ�Ӹ�ֵ
	*array_at(&a, 0) = 10;//array[0]=10;
	printf("%d\n",*array_at(&a,0));//����a��0λ����ָ�Ķ�����Ϊ����ֵ��ָ�룬����Ҫ���Ǻ�

	//����ѭ��,ʹ���鳤��
	//�������޶����������������������Ĵ���
	int number=0;
	int cnt = 0;
	while (number != -1)
	{
		scanf("%d",&number);
		if (number != -1)
		{
			*array_at(&a, cnt++) = number;//������-1ʱ�����鳤��
		}
		//scanf("%d",array_at(&a,cnt++));
	}

	array_free(&a);

	return 0;
}
