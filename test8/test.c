#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//数组名
int main() {
	int arr[10] = {1,2,3,4,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名) - 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	//2. &数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
	printf("%p\n", arr);  //第1个元素的地址
	printf("%p\n", arr+1);  //第1个元素的地址
	printf("%p\n", &arr[0]); //第1个元素的地址
	printf("%p\n", &arr[0]+1); //第1个元素的地址
	printf("%p\n", &arr);  //&arr - 数组的地址
	printf("%p\n", &arr+1);  //&arr - 数组的地址

	//通常情况下：数组名是首元素的地址
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d\n", *arr);
	return 0;
}


//void bubble_sort(int arr[],int sz) {  //每次创建sz会造成浪费
//	//确定冒泡排序的趟数
//	int i = 0;
//
//	//当传入&arr[0]时，相当于4/4=1
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//sz时要进行sz-1次冒泡
//	for ( i = 0; i < sz-1; i++) //一共进行9趟排序
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)  //第1趟：9次 第2趟：8次
//		{
//			//升序
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//有序数组的冒泡排序
//void bubble_sort(int arr[], int sz) {  //每次创建sz会造成浪费
//	//确定冒泡排序的趟数
//	int i = 0;
//	//sz时要进行sz-1次冒泡
//	for (i = 0; i < sz - 1; i++) //一共进行9趟排序
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)  //第1趟：9次 第2趟：8次
//		{
//			//升序
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)  //没有进行交换，有序
//		{
//			break;
//		}
//	}
//}
//
////冒泡排序
//int main() {
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };//有序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //在外边算好数组的长度
//	//对arr进行排序，排成升序
//	//arr是数组，对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	//相当于传过去的是  &arr[0]  arr[0]的地址
//	bubble_sort(arr,sz);//冒泡排序函数
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//二维数组的创建
//int main() {
//	//int arr[3][4] = {1,2,3,4,5};
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	//for ( i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	//1行
//	//	for(j = 0; j<4;j++)
//	//	{
//	//		printf("%d ",arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		//1行
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d] = %p\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[][4] = { {1,2,3,4},{5,6,7,8} };
//
//	return 0;
//}

//数组中的内存
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]); //打印地址
//	}
//	return 0;
//}


//输出数组所有元素
//int main() {
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//for ( i = 0; i < (int)strlen(arr); i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//  总大小/元素大小=元素个数
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//
//	//for ( i = 0; i < 6; i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//
//	return 0;
//}




//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}


//int main() {
//
//	//创建一个数组- 存放整型 - 10个
//	int arr[10] = {1,2,3};//不完全初始化，将剩下的元素默认初始化为0 
//	char arr2[5] = {'a','b'};
//	//错误的初始化方式
//	//int n = 10;
//	//char ch[n]; //err错误,不能放变量
//	char arr3[5] = "abc";
//
//	//不添加初值的创建数组
//	char arr4[] = "abcdef";
//	//sizeof 计算arr4所占空间的大小
//	//7个元素 - char 7*1 = 7
//	printf("%d\n",sizeof(arr4));//7
//
//	//strlen-求字符串的长度-'\0' 之前的字符个数
//	//[a b c d e f \0]
//	//6
//	printf("%d\n", strlen(arr4));//6
//
//	//1.strlen和sizeof没有什么关联
//	//2.strlen是求字符串长度的- 只能针对字符串求长度-库函数
//	//3.sizeof计算变量、数组、类型的大小 - 单位是字节 - 操作符
//	
//	return 0;
//}