#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int a, b, c;
	a = 5;
	c = ++a;//c=6,a=6
	b = ++c, c++, ++a, a++;
	//逗号表达式，一直往后算，最后一个表达式才赋给b
	//从左往右逐个计算表达式，整个表达式的值为最后一个表达式的值。
	//c=8 原来a=6,++a后a=7,a++将a加前的值赋给b,所以b=7,此时a++后a=8
	b += a++ + c; //加法的优先级比加等于高。a++ + c =8+8=16,但还要加到原来的b上，所以16+7=23.后面a=9
	printf("a=%d b=%d c=%d\n", a, b, c);//a = 9 b=23 c=8
	return 0;
}


//int i;//全局变量-不初始化-默认是0
//int main() {
//	i--;
//	//-1
//	//10000000000000000000000000000001   -1的原码
//	//11111111111111111111111111111110  反码
//	//11111111111111111111111111111111  补码：反码+1
//	//sizeof会把它变成无符号数，把最高位的1也算上，这个数会变得很大，一定大于-1
//
//	if (i>sizeof(i)) //sizeof()-计算变量/类型所占内存的大小 >= 无符号数
//	{
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}


//int main() {
//	int a = 0x11223344;//放进内存块：倒着放  44 33 22 11，各占1字节
//	char* pc = (char*)&a;//char* :字符型，*pc只能操作1个字节
//
//	*pc = 0;
//	printf("%x\n", a);//还原回来：11 22 33 00
//	return 0;
//}

////判断输出的值
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);//00345
//	}
//	return 0;
//}


//两个数组的交换(数组一样大)
//不能直接用=交换,需要遍历
//tmp一次只放一个值（当前要交换的值）
//数组：需要把地址放进去
//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz;i++) {
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}


//指针没有变，指向数组的第1个元素地址，通过arr的索引改值
//void Init(int arr[],int sz) { //只传arr,指的是第1个元素的地址，每次sz的值都是1，所以从外面传sz的值进来
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//arr[i]取出特定数组，i为索引值
//	}
//}
//
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////逆置
//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//把数组初始化为0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	printf("\n");
//	Print(arr, sz);//打印
//	return 0;
//}

//int main() {
//	{
//		int a = 0;//函数内符合语句中定义的变量只能在复合语句中使用
//	}
//	//printf("%d\n", a);//报错
//}

//好孩子 - 孩子
// 指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//整型数组 - 存放整型
//	//字符数组 - 存放字符
//	//指针数组 - 存放指针
//	int arr1[10];
//	int* arr2[3] = {&a,&b,&c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3;i++) {
//		printf("%d ", *(arr2[i]));//解引用符号，打印出对象的值
//	}
//	return 0;
//}


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