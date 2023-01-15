#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	printf("%p\n", arr);//地址-首元素的地址
	printf("%p\n", arr+1);//地址-首元素的地址
	printf("%p\n", &arr[0]);//地址-首元素的地址
	printf("%p\n", &arr[0]+1);//地址-首元素的地址
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//1.&arr - &数组名 - 数组名不是首元素的地址，数组名表示整个数组- &数组名取出整个数组的地址
	//2.sizeof(arr) - sizeof(数组名) - 数组名表示整个数组- sizeof(数组名)计算整个数组的大小
	return 0;
}

//指针-指针
//int my_strlen(char* str) //首元素的地址：char
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0) {
//		end++;
//	}
//	//end-start:中间元素个数
//	return end - start;
//}
//
//
//int main() {
//	// strlen-求字符串长度
//	// 递归 - 模拟实现了strlen- 计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main() {
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针-指针=中间的元素个数
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[9] - &ch[0]);//不可知的，错误的
//	return 0;
//}


//指针+—整数
//#define N_VALUES 5
//int main() {
//	float values[N_VALUES];
//	float* vp;
//	//指针+-整数：指针的关系运算
//	//for (vp = &values[0]; vp > &values[N_VALUES];)
//	//{
//	//	*--vp = 0;
//	//}
//	for (vp = &values[N_VALUES];  vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}


//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	//for ( i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1; //指针后移
//	//}
//	//for (i = 0; i < 5; i++) {
//	//	printf("%d ", *p);
//	//	p += 2;//13579
//	//}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", *p);
//		p -= 2;//13579
//	}
//	return 0;
//}


//野指针
//// 指针越界访问
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超过数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

//int main() {
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部指针变量，被初始化随机值
//	*p = 20; //指向的空间不知道是哪里，随机内存中找到一个空间
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };//开辟一块连续内存空间
//	int* p = arr;//数组名-首元素的地址
//	char* p = arr;//数组名-首元素的地址
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}


//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}


//int main() {
//	int a = 10;
//	int* p = &a;//指针变量 p指针
//	//p是存放地址的变量
//	//指针是一个变量，里面存放的是地址，也常说指针就是地址，地址就是指针
//	return 0;
//}