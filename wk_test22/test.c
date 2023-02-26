#define  _CRT_SECURE_NO_WARNINGS 1

#include "array.h"
#include<stdio.h>
#include<stdlib.h>

const BLOCK_SIZE = 20;	

//typedef struct {
//	int* array;
//	int size;
//} Array;

//在函数里逐一实现
Array array_create(int init_size) {
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int) * a.size);
	return a;
}

void array_free(Array* a) {
	//array里面有指针所指的东西，所以要先做一次free
	free(a->array);
	//保险起见，且free 0,NULL是无害的
	a->array = NULL;
	a->size = 0;
}

//封装,把a的size保存起来
int array_size(const Array* a) {
	return a->size;
}

//返回查找元素所在的位置：返回指针
int* array_at(Array* a, int index) {
	//如果array_at越界了
	if (index >= a->size)
	{
		// index / Block_size:位于哪个block里头，+1是block从1开始数的序号
		//乘以blocksize再减去a.size
		array_inflate(a, (index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);//每次多出一个
	}
	return &(a->array[index]);//返回a的指针
}
//或替代返回的指针：get和set方法
int array_get(const Array *a,int index) {
	return a->array[index];
}
void array_set(Array* a, int index, int value) {
	a->array[index] = value;
}

//数组怎么长大
//可以用库函数的标准函数，循环效率更高
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

	//输出a的大小
	printf("%d\n",array_size(&a));//保护了a的size
	printf("%d\n",a.size);

	//返回指针的好处：返回值没有东西，可以直接赋值
	*array_at(&a, 0) = 10;//array[0]=10;
	printf("%d\n",*array_at(&a,0));//返回a在0位置所指的对象，因为返回值是指针，所以要加星号

	//加入循环,使数组长大
	//可以无限读入整数让数组无限增长的代码
	int number=0;
	int cnt = 0;
	while (number != -1)
	{
		scanf("%d",&number);
		if (number != -1)
		{
			*array_at(&a, cnt++) = number;//不等于-1时让数组长大
		}
		//scanf("%d",array_at(&a,cnt++));
	}

	array_free(&a);

	return 0;
}
