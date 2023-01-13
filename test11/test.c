#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int a = 3;
	int b = 5;
	//&& 逻辑与：为真的时候为1，为假的时候为0
	int c = a && b;
	printf("%d\n", c);//1
	a = 0;
	c = a && b;
	printf("%d\n",c);//0
	return 0;
}

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