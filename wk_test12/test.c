#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

/**
 * 找出key在数组a中的位置
 * @param key 要寻找的数字
 * @param a 要寻找的数组
 * @param length 数组a的长度
 * 
 * \return 如果找到，返回其在a中的位置;如果找不到则返回-1
 */
int search(int key, int a[], int length);

int main() {
	//int a[] = {2,4,6,7,1,3,5,7,9,11,13,23,14,32};
	//int a[13] = { 2 };
	//初始化方法一
	//int a[13] = {0};
	//初始化方法二
	//for ( i = 0; i < 13; i++)
	//{
	//	a[i] = 0;
	//}


	int a[] = { [1] = 2,4,[5] = 6 };
	int i = 0;
	printf("%lu\n",sizeof(a)); //数组a的大小：24
	printf("%lu\n", sizeof(a[0]));//a的一个单元大小：4
	printf("%lu\n", sizeof(a) / sizeof(a[0])); //元素的个数：24 / 4 = 6

	for ( i = 0; i < 6; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");


	//int x;
	//int loc;
	//printf("请输入一个数字：");
	//scanf("%d",&x);
	//loc = search(x, a, sizeof(a) / sizeof(a[0]));
	//if (loc != -1)
	//{
	//	printf("%d在第%d个位置上\n",x,loc);
	//}
	//else {
	//	printf("%d不存在\n",x);
	//}
	
	return 0;
}

int search(int key,int a[],int length) { //数组作为参数传递
	int ret = -1;
	int i;
	for ( i = 0; i < length; i++)
	{
		if (a[i] == key) {
			ret = i;
			break;
		}
	}
	return ret;
}
