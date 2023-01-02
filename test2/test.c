#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//地址举例
// 存char地址
int main() {
	char ch = 'w';
	char* pc = &ch;
	*pc = 'q';
	//printf("ch = %c\n", ch);
	printf("%d\n", sizeof(pc));//pc地址的大小
	return 0;
}

//存int地址
//int main() {
//	int a = 10;//4个字节
//	//指针变量，存放地址
//	int* p = &a;//取地址
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p = 20; //*p - 解引用操作符,赋值给它即赋值给地址p所引用的对象
//	printf("a = %d\n", a);
//	return 0;
//}


//#define定义标识符常量
//#define MAX 100
//#define 可以定义宏 - 带参数
// 
// 宏的定义
//#define MAX(X,Y) (X>Y?X:Y)	//意思是前面定义的宏会被替换为后面的数
////函数的实现
// int Max(int x, int y) {
//	 if (x > y)
//		 return x;
//	 else
//		 return y;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b);
//	printf("max = %d\n", max);
//	return 0;
//}


//3、static修饰函数
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//1、static修饰局部变量
//局部变量的生命周期变长(可以用到main函数中)
//2、static修饰全局变量
//改变了常量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用了
//int main() {
//	//extern - 声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}

// static int a的使用
//void test() {
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main() {
//	int i = 0;
//	while (i< 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//typedef:类型重定义
//int main() {
//	//将类型名重新定义
//	//typedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}

//关键字
//int main() {
//	register int a = 10; //建议把a定义成寄存器变量
//	int b = 10;
//	b = -2;
//	//int定义的变量是有符号的
//	// signed int;
//	// unsigned int num = 1;
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0;
//}

//int Add(int x,int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[] - 下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);//函数调用操作符
//	return 0;
//}


//条件运算符
//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//表达式结果为真，返回a，为假返回b
//	printf("max = %d\n", max);
//	return 0;
//}


//逻辑运算符
//int main() {
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与
//	//|| - 逻辑或
//	int a = 3;
//	int b = 5;
//	int c = a && b;//a是非0，b是非0，均为真，故c=1
//	printf("c = %d\n", c);
//	a = 0;
//	b = 5;
//	c = a && b;
//	printf("c = %d\n", c);//此时a=0,为假，一假则假,c=0
//	c = a || b;
//	printf("c = %d\n", c);//此时a=0为假，b为真，一真则真,c=1
//	return 0;
//}


//int main() {
//	int a = (int)3.14; //double --> int
//	printf("a=%d", a);
//	return 0;
//}


//前置、后置++  --
//int main() {
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//printf("a = %d b = %d\n", a, b);//11  10,先使用b，b不变为10，a++后为11
//	//int b = ++a; //前置++，先++，再使用
//	//printf("a = %d b = %d\n", a, b);//11  11，先++赋值b变成11，++a后为11
//	//int b = a--;//后置--，先使用，再--
//	//printf("a = %d b = %d\n", a, b);//9  10,先使用b，b不变为10，a--后为9
//	int b = --a;//前置--，先使用，再--
//	printf("a = %d b = %d\n", a, b);//9  9,先--后赋值b，b变为9，a--后为9
//	return 0;
//}


//取反运算符
//int main() {
//	int a = 0;//整型，4个字节，32个bit位
//	int b = ~a;//b是有符号的整型
//	//~ 按（二进制）位取反
//	//1010
//	//0101
//	//a:00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//按位取反得反码，反码+1得补码，第一位是符号位不变
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	//得b=-1
//
//	printf("%d\n",b);//使用的，打印的是这个数的原码,-1
//	return 0;
//}

//最大值
//int Max(int x,int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	
//}


//转义数字
//int main() 
//{
//	printf("%d\n", strlen("c:\test\121"));//7 \ddd 8进制转十进制 
//	return 0;
//}

//int main() {
//	int arr[10]; //定义一个存放10个整数数字的数组
//
//	//char ch[20];
//	//float arr2[5];
//	return 0;
//}

//自定义加法
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1,num2);
//	printf("sum= %d\n", sum);
//	sum = Add(a, b);
//	printf("sum= %d\n", sum);
//	return 0;
//
//}

//while循环：2w行代码
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000) 
//	{
//		printf("敲一行代码: %d\n",line);
//		line++;
//	}
//	if (line >= 20000) {
//		printf("好offer\n");
//	}
//	return 0;
//}

//简单的if-else语句
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input); //1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}

//char类型，转义字符
//int main()
//{
//	printf("%c\n", '\32');//char类型必须用单引号括起来
//	//\32 -- 32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符  3*8^1+2*8^0 = 26
//	//32 --> 10进制  26 --> 作为ASCII码值代表的字符
//	//382不能运行，因为8进制0-7
//
//	//长度13，\t不算
//	printf("%d\n", strlen("c:\test\32\test.c")); //#include <string.h>头文件
//	return 0;
//}

//字符串
//int main()
//{
//	//数据在计算机上存储时，存储二进制
//	//#av$
//	//a - 97
//	//A - 65
//	//...
//	//ASCII编码，对应的值叫ASCII码值
//	char arr1[] = "abc";//字符数组
//	//"abc" -- 'a' 'b' 'c' '\0' -- '\0'字符串的结束标志
//	char arr2[] = { 'a','b','c' ,0};//或是加一个'\0'
//	//'\0' - 0
//	//'a' - 97
//	//'a' 'b' 'c'
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen() - string length - 计算字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//4.枚举常量
//枚举：一一列举
//
//性别：男，女，保密
//三原色：红、黄、蓝
//星期：1，2，3，4，5，6，7
//枚举关键-enum
//enum  Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
////大括号里定义的枚举常量，不可以改，但是通过枚举类型enum Color创建出来的变量是可以改的
//int main()
//{
//	enum Color color = BLUE;//color是一个变量
//	color = YELLOW;//color是变量，可以改成YELLOW
//	//BLUE = 6;//大括号里定义的枚举常量，不可以改，放的是2
//	return 0;
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//3.#define定义的标识符常量
//#define MAX 10
//
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//2.标识符
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//scanf
//	//strcpy
//	//strlen
//	//strcat
//	//...
//	//不安全的
//	//strcpy_s
//	//...
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//1.常属性
//int main()
//{
//	//const:常属性
//	//const修饰的常变量，num不能改，具有常属性，但本质属性是一个变量
//	const int n = 10;//n是变量，又有常属性，所以n是常变量
//	//int arr[n] = { 0 };//此时n不能用，说明n是变量
//	n = 20;//不能修改值
//
//
//	/*const int num = 4;
//	printf("%d\n",num);
//	num = 8;
//	printf("%d\n", num);*/
//	//字面常量：单个的值
//	//3;
//	// 100;
//	//3.14；//字面常量
//	return 0;
//}