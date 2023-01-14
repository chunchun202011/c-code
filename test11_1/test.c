#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//隐式类型转换
int main() {
	char a = 3;
	//00000000000000000000000000000011
	//00000011  - a char里面放的,进行了截断
	char b = 127;
	//01111111 - b
	//a和b如何相加
	//00000000000000000000000000000011
	//00000000000000000000000001111111
	//00000000000000000000000010000010
	char c = a + b;
	//10000010 - c
	//11111111111111111111111110000010 - 补码
	//11111111111111111111111110000001 - 补码-1 -> 反码
	//10000000000000000000000001111110 - 原码
	//-126

	printf("%d\n",c);
	return 0;
}


//结构体：学生
//创建一个结构体类型-struct Stu
//struct Stu 
//{
//	char name[20];
//	int age;
//	char id[20];
//}; //注意：结构体后面要分号
//
//int main() {
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象stu
//	struct Stu s1 = {"张三",20,"2019010305"};
//	struct  Stu* ps = &s1;//指针变量
//	//结构体指针 -> 成员名
//	printf("%s\n", ps -> name); //指向原属性
//	printf("%d\n", ps -> age);
//
//	//printf("%s\n", (*ps).name); //指向原属性
//	//printf("%d\n", (*ps).age);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	return 0;
//}

//int get_max(int x,int y) {
//	return  x > y ? x : y;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//调用函数的时候的()就是函数调用操作符
//	int max = get_max(a, b); //函数的操作数至少1个
//	printf("max = %d\n", max);
//	return 0;
//}

//下标符和操作数
//int main() {
//	int a[10] = { 0 }; //创建数组
//	a[4] = 10;//使用下标引用操作符
//	//[ ] 的两个操作数是arr和9
//	1 + 2;
//	printf("a[4] = %d\n", a[4]);
//	return 0;
//}

//条件操作符
//int main() {
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	//上下代码等价
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	max = (a > b ? a : b);
//	//if (a>5)
//	//{
//	//	b = 3;
//	//}
//	//else
//	//{
//	//	b = -3;
//	//}
//
//	return 0;
//}


//360笔试题
//int main() {
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("i = %d\n",i);//0
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n",a,b,c,d);//2234
//	return 0;
//}


//逻辑运算符
//int main() {
//	int a = 3;
//	int b = 5;
//	//&& 逻辑与：为真的时候为1，为假的时候为0
//	int c = a && b;
//	printf("%d\n", c);//1
//	a = 0;
//	c = a && b;
//	printf("%d\n",c);//0
//	return 0;
//}

//void test1(int arr[]) { //传的是首元素的地址
//	printf("%d\n", sizeof(arr)); //4或8，64位是8
//}
//
//void test2(char ch[]) {//传的是首元素的地址
//	printf("%d\n", sizeof(ch));//4或8，64位是8
//}
//
//int main() {
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//int main() {
//	int a = (int)3.14; // int a = int(3.14); //err
//	printf("%d\n",a);
//	return 0;
//}


//int main() {
//	int a = 10;
//	printf("%d\n", ++a);//前++，先++后使用，10
//	a = 10;
//	printf("%d\n", a++);//前++，先使用后++，11
//	return 0;
//}


//按位取反
//int main() {
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n",a); //15
//	a = a & (~(1 << 2));
//	printf("%d\n", a);//11
//	//按位或
//	//00000000000000000000000000001011  —— 11
//	//00000000000000000000000000000100  按位或的数
//	// 1<<2
//	//00000000000000000000000000000001   //1<<2
//	// 
//	//00000000000000000000000000001111 按位或得到的(想得到这个数)
//	//想要得到原来的数：按位与下面这个数
//	//11111111111111111111111111111011
//	//00000000000000000000000000001011  按位与上面的数得到
//	//
//
//	//int a = 0;
//	//~ 按二进制位取反
//	//00000000000000000000000000000000 a的二进制表示（正数原码、反码、补码相同）
//	//11111111111111111111111111111111 按位取反后的结果：补码
//	//11111111111111111111111111111110 打印：原码（补码-1取反,符号位不变得原码）
//	//10000000000000000000000000000001
//	//-1
//
//	printf("%d\n", ~a);
//	return 0;
//}


//int main() {
//
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));  //a+5得到的数用short类型接收，还是2，不管右边是谁
//	printf("%d\n", s);//0,s的值本身
//
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n",sizeof(a));  //变量的括号可以省略，类型不可以
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n",sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}