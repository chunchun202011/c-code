#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//结构体
// char int double ...
// 书 - 复杂对象
// 名字+身高+年龄+身份证号码...
// 书名+作者+出版社+定价+书号...
//复杂对象 -- 结构体 -- 我们自己创造出来的一种类型
struct Book {
	char name[20];//C语言程序设计
	short price;//55
};  //分号不可缺少，表明结构体的结束


int main() {
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计" ,55};
	//想要修改名字为C++：字符串拷贝
	// 若直接b1.name="C++"：有问题
	//拷贝到哪里  拷贝什么
	strcpy(b1.name, "C++");//strcpy - string copy - 字符串拷贝，需要用头文件string.h
	printf("%s\n", b1.name);

	struct Book* pb = &b1;
	//利用pb打印出我的书名和价格
	//结构体变量.成员
	//结构体指针 -> 成员
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//简化
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);

	//printf("书名：%s\n",b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	return 0;
}