#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//不同类型的指针不能相互赋值
int main(void) {
	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
	char* p = &ac[0];
	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* q = ai;
	q = p;//报错
	return 0;
}


////遍历数组
//int main(void) {
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
//	char* p = &ac[0];
//	int i;
//	for ( i = 0; i < sizeof(ac) / sizeof(ac[0]); i++)
//	{
//		printf("%d\n",ac[i]);
//	}
//	//for (p=ac; *p!= -1;p++)
//	//for (p = ac; *p != -1; )
//	//{
//	//	printf("%d\n",*p++);//此处for循环的++可以省略
//	//}
//
//	//也可用while
//	while (*p!=-1) //-1不会作为一部分输出，是一个结尾标志
//	{
//		printf("%d\n", *p++);
//	}
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = ai;
//	return 0;
//}


////指针运算
//int main() {
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = &ac[0];
//	char* p1 = &ac[5];
//	
//	printf("p  =%p\n",p);
//	printf("p+1=%p\n", p+1);
//	//printf("*p= %d\n", *p);
//	//printf("*(p+1)= %d\n", *(p+1));
//	printf("p1-p= %d\n", p1-p);
//	//*p -> ac[0]
//	//*(p+1) -> ac[1] 
//	//*(p+n) <=> ac[n]
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int *q = ai;
//	int* q1 = &ai[6];
//	printf("q  =%p\n", q);
//	printf("q1=%p\n", q1);
//	printf("q1-q=%d\n", q1-q);
//	return 0;
//}


//指针与数组：为什么数组传进函数后的sizeof不对了.
//void minmax(int a[], int len, int  *max, int *min);
//
//int main(void) {
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
//	int min = 0;
//	int max=0;
//	printf("main sizeof(a)=%lu\n",sizeof(a));
//	printf("main a=%p\n",a);
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("a[0]=%d\n",a[0]);//a[0]的值被改动
//	printf("min=%d,max=%d\n",min,max);
//
//	return 0;
//}
//
//void minmax(int a[], int len, int* min, int* max) {
//	int i;
//	printf("minmax sizeof(a)=%lu\n",sizeof(a));
//	printf("minmax a=%p\n", a);
//	a[0] = 1000; //在minmax里面改a[0]的值
//	printf(" min=%p\n",min);
//	*min = *max = a[0];
//
//	for ( i = 1; i < len; i++)
//	{
//		if (a[i] < *min) {
//			*min = a[i];
//		}
//		if (a[i] > *max) {
//			*max = a[i];
//		}
//	}
//}


/**
 * 常见错误：指针未赋值实际变量的地址就开始使用.
 * 
 * \return 
 */
//int main() {
//	int i = 6;
//	int *p;
//	int k;
//	k = 12;
//	*p = 12;
//	
//	printf("&i=%p\n",&i);
//	f(&i);
//	g(i);
//
//	return 0;
//}
//
//void f(int *p) {
//	printf(" p=%p\n",p);
//	printf("*p=%d\n", *p);
//}
//
//void g(int k) {
//	printf("k=%d\n",k);
//}



//函数值和结果分开返回
/**
* 应用场景：运算结果可能会出错（有特定的值）
 * @return 如果除法成功，返回1；否则返回0.
 */
//int divide(int a, int b, int *result); //相除的结果通过result指针交回来
//
//int main(void) {
//	int a = 5;
//	int b = 2;
//	int c;
//	if (divide(a,b,&c))
//	{
//		printf("%d/%d=%d\n",a,b,c);
//	}
//	return 0;
//}
//
//int divide(int a, int b, int *result) { //传入地址
//	int ret = 1;
//	if (b == 0) ret = 0; //如果除数0，返回值为0
//	else
//	{
//		*result = a / b; //可以输出结果  result是一个指针变量，*result解变量，是原对象的值
//	}
//	return ret;
//}



//多个参数:算出最大最小值，用两个指针返回值
//void minmax(int a[], int len, int* max, int* min);
//
//int main(void) {
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
//	int min, max;
//	//计算长度传入用于数组遍历的for循环
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("min=%d,max=%d\n",min,max);
//
//	return 0;
//}
//
//void minmax(int a[], int len, int* max, int* min) {
//	int i;
//	*min = *max = a[0];
//	for ( i = 1; i < len; i++)
//	{
//		if (a[i] < *min) {
//			*min = a[i];
//		}
//		if (a[i] > *max) {
//			*max = a[i];
//		}
//	}
//}



//交换两个变量的值
//void swap(int *pa ,int *pb);
//
//int main() {
//	int a = 5;
//	int b = 6;
//	swap(&a, &b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}
//
////交换两个变量的值
//void swap(int *pa,int *pb) {
//	int t = *pa; //int t 接收即可，意思是t的值存放pa的地址，若改为int *t接收,则将pa的地址赋值给t的地址
//	*pa = *pb;
//	*pb = t;
//}
