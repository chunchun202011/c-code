#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//选择排序
//找到最大的数
int max(int a[],int len) {
	int maxid = 0;
	for (int i = 1; i < len; i++)
	{
		if (a[i] > a[maxid]) {
			maxid = i;
		}
	}
	return maxid;
}

int main() {
	int a[] = { 2,45,6,12,87,34,90,24,23,11,65};
	int len = sizeof(a) / sizeof(a[0]);
	//找到最大值后将最大值和原来的maxid处值交换
	//循环：控制变量，从数组的尾巴走回来
	for (int i = len-1; i > 0; i--) //i大于0时进行，最大是1，因为最后只确定到1,0已确定是最小的
	{
		int maxid = max(a, i+1);//从0到i+1长度上找一个最大的，再交换
		//swap a[maxid] , a[len-1]
		int t = a[maxid];
		a[maxid] = a[i];//i为下标
		a[i] = t;
		printf("%d ",maxid);//输出每次的maxid
	}
	printf("\n");

	//遍历输出数组
	for (int i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	
	//找到maxid的下标，将最后一个和它交换
	//int maxid = max(a, sizeof(a) / sizeof(a[0]));
	//
	////swap a[maxid] , a[len-1]
	//int t = a[maxid];
	////a[maxid] = a[sizeof(a) / sizeof(a[0])-1];
	////a[sizeof(a) / sizeof(a[0]) - 1] = t;
	//a[maxid] = a[len - 1];
	//a[len - 1] = t;
	//printf("%d\n",maxid);


	return 0;
}

//二分法查找
//int amount[] = { 1,5,10,25,50 };
//int* name[] = {"penny","nickel","dime","quarter","half-dollar"};
//
//int search(int key,int a[],int len) {
//	int left = 0;
//	int right = len - 1;
//	
//	int ret = 0;
//
//	while (right > left)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] == key)
//		{
//			ret = mid;
//			break;
//		}
//		else if (a[mid] > key) {
//			right = mid - 1;
//		}
//		else
//		{
//			left = mid + 1;
//		}
//	}
//
//	return ret;
//	
//}
//
////二分搜索：对于排好序的数可以快速搜索
//int main() {
//	int k = 10;
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));
//	printf("%d\n",r);
//	return 0;
//}



//把两个面值数字和值放在一起
//结构体
//int amount[] = { 1,5,10,25,50 };
//int* name[] = {"penny","nickel","dime","quarter","half-dollar"};
//
//struct 
//{
//	int amount;
//	char* name;
//} coins[] = { //用这个结构制造一个coins的数组
//	{1,"penny"},
//	{5,"nickel"},
//	{10,"dime"},
//	{25,"quarter"},
//	{50,"half-dollar"}
//};
//
//
//int main() {
//	int k = 10;
//	//int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));//10在amount这个数组里面
//	//不用search函数：传不了数组用
//	for (int i = 0; i < sizeof(coins)/sizeof(coins[0]); i++)
//	{
//		if (k == coins[i].amount) {
//			printf("%s\n",coins[i].name);
//			break;
//		}
//	}
//	
//	return 0;
//}


//两个数组循环
//int amount[] = { 1,5,10,25,50 };
//int* name[] = {"penny","nickel","dime","quarter","half-dollar"};
//
//int search(int key,int a[],int len) {
//	int ret = -1;
//	//数组遍历
//	for (int i = 0; i < len; i++)
//	{
//		if (key == a[i]) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main() {
//	int k = 10;
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));//10在amount这个数组里面
//	if (r > -1)
//	{
//		printf("%s\n",name[r]); //r是搜索到的索引
//		printf("%d\n", r);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//线性搜索
//int search(int key,int a[],int len) {
//	int ret = -1;
//	//数组遍历
//	for (int i = 0; i < len; i++)
//	{
//		if (key == a[i]) {
//			ret = i;
//			break;
//		}
//	}
//	return ret;
//}
//
//int main() {
//	int a[] = { 1,3,2,5,12,14,23,6,9,45 };
//	int r = search(12, a, sizeof(a) / sizeof(a[0]));
//	printf("%d\n",r);
//	return 0;
//}
