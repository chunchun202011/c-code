#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void minmax(int *a, int len, int *max, int *min);

//指针与数组
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a); //输出main里a的地址
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("a[0]=%d\n", a[0]); //输出a[0]的值
	printf("min=%d,max=%d\n",min,max);
	int* p = &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);


	return 0;
}

void minmax(int *a, int len, int* min, int* max) {
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("minmax a=%p\n", a); //输出minmax里a的地址
	a[0] = 1000;
	*min = *max = a[0];
	for ( i = 1; i < len; i++)
	{
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}


//void f(int *p);
//void g(int k);
//
//int main() {
//	int i = 6;
//	printf("&i=%p\n",&i);//输出i的地址
//	f(&i); //取出地址，交给f函数
//	g(i);//如果传入一个g函数，只能得到它的值
//	return 0;
//}
//
//void f(int *p) {
//	printf(" p=%p\n",p);//输出传入的地址
//	printf("*p1=%p\n",*p);//输出传入的地址
//	*p = 26;
//	printf("*p=%p2\n", *p);//输出传入的地址
//}
//
//void g(int k) {
//	printf("k=%d\n",k);
//}

//取数组变量
//int main() {
//	int a[10];
//
//	printf("%p\n",&a);
//	printf("%p\n", a);//直接取a的地址
//	printf("%p\n", &a[0]);
//	printf("%p\n", &a[1]);
//	return 0;
//}


//int main(void) {
//
//	int i = 0;
//	int p = 0;
//
//	printf("%p\n", &i);
//	printf("%p\n", &p);

	//p = (int)&i;
	//错误的取法
	//p = (int)&(i++);
	//p = (int)&(++i);

	//printf("0x%x\n",p);
	//printf("%p\n", &i);
	//printf("%lu\n",sizeof(int));
	//printf("%lu\n", sizeof(&i));
	//printf("%lu\n", sizeof(&p));


	//int i = 0;
	//printf("0x%x\n",&i);//警告：不能用这种方式输出地址
	//printf("%p\n",&i);//输出地址用%p
//	return 0;
//}


//sizeof
//int main(){
//	int a;
//	a = 6;
//	printf("sizeof(double)=%ld\n", sizeof(double));
//	printf("sizeof(a)=%ld\n",sizeof(a));
//	return 0;
//}
