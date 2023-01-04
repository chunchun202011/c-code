#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main() {
	int i = 0;
	char password[20] = {0};
	//char right = "1234";
	//int i = 0;
	
	for ( i = 0;  i < 3;  i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		/*if (password != "1234")
		{
				printf("请重新输入密码！您还有%d次机会！\n",i);
		}
		if(password == "1234")
		{
			printf("密码正确！");
			break;
		}*/
		if (strcmp(password,"123456") == 0) //==不能用来比较两个字符串是否相等，应该使用库函数-strcmp
		{
			printf("登录成功\n");
			break;
		}
	}
	if (i == 3)
		printf("机会已用完！退出程序\n");
	return 0;
}

//int main() {
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//[a b c \0]
//	// 0 1 2  3
//	// 4-1(3,包括了0)
//	//4-2（下标从0开始，包括了后面的\0）
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
//
//	int right = strlen(arr1)-1;//下标从0开始
//	//循环体
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息1秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数 - cls - 清空屏幕 
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//折半查找
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k) {
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//顺序查找
//int main() {
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (k == arr[i]) {
//			printf("找到了，下标是：%d\n",i);
//			break;
//		}
//	}
//	if (i==sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//计算1 -- n的阶乘
//int main() {
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int total = 1;
//	int sum = 0;
//	printf("请输入n的值:");
//	scanf("%d", &n);
//	//计算阶乘的和
//	//重新赋值
//	for (i = 1; i < n+1 ; i++)
//	{
//		total = total * i;
//		sum = sum + total;
//	}

	//错误写法：3的阶乘和=12,正确应是9
	//for (n = 1; n <= 3 ; n++)
	//{
	//	for (i = 1; i <= n; i++) {
	//		total = total * i;
	//	}
	//	sum = sum + total;
	//}
	//每次都是一个阶乘
	// total = 1*1=1
	// total = 1*1*2=2
	// total = 1*1*2*3=6

	//计算阶乘
	//for (i = 1; i < n+1; i++) {
		//total = total * i;
	//}


//	printf("阶乘为：%d", total);
//	printf("阶乘和为:%d", sum);
//	return 0;
//}


//do...while()循环
//int main() {
//	//1-10;
//	int i = 1;
//	do
//	{
//		//死循环
//		if (i==5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}


//变种2
//int main() {
//	//一道笔试题
//	int i = 0;
//	int k = 0;
//	//中间是判断语句，k=0赋值给表达式为0，故中间判断语句为0，False,不执行
//	//赋值，=，完成后，返回的是结果
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}

	//int x, y;
	//for ( x = 0,y = 0; x < 2 && y <5; ++x,y++)
	//{
		//printf("hehe\n");//两次
	//}
	//return 0;
//}



//int main() {
//	//变种1
//	//死循环
//	//for (;;) {
//		//printf("hehe\n");
//	//}
//	int i = 0;
//	int j = 0;
//	for (; i < 10;i++) {
//		for ( ;  j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}

//for前闭后开写法
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	//10次循环
//	//10次打印
//	//10个元素
//	//for ( i = 0; i < 10; i++)
//	//{
//		//printf("%d ", arr[i]);
//	//}
//	return 0;
//}



//错误写法
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		if (i=5)
//			printf("hehe\n");
//		printf("haha\n");
//	}
//	return 0;
//}


//for循环
//用的最多的
//int main() {
//	int i = 0;
//	//初始化 判断 调整
//	for (i = 1; i <= 10; i++) {
//		if (i == 5) {
//			//break;
//			continue;
//		}
//		printf("%d", i);
//	}
//	return 0;
//}


//for循环
//便于  初始化、判断、调整的关系
//int main() {
//	int i = 0;//初始化
//	while (i < 10) {//判断
//		//...
//		i++;//调整
//	}
//	return 0;
//}

//int main() {
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//while在输入中的应用
//int main() {
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>");
//	//因为此处的password是数组，可表示地址，所以不用取地址符号
//	scanf("%s",password);//输入密码，并存放在password中
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while ((ch=getchar()) != '\n')
//	{
//		; //空语句
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret == 'Y') {
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	//printf("%d\n",'\n');//10 来自回车
//	return 0;
//}