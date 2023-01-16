#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//好孩子 - 孩子
// 指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//整型数组 - 存放整型
	//字符数组 - 存放字符
	//指针数组 - 存放指针
	int arr1[10];
	int* arr2[3] = {&a,&b,&c};//指针数组
	int i = 0;
	for (i = 0; i < 3;i++) {
		printf("%d ", *(arr2[i]));//解引用符号，打印出对象的值
	}
	return 0;
}


//二级指针
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; // ppa是二级指针
//	printf("%d\n",ppa);
//	printf("%d\n", a);
//	//int** * pppa = &ppa;
//	return 0;
//}


//int main() { 
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i <10; i++)
//	{
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}