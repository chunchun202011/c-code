#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//ѡ������
//�ҵ�������
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
	//�ҵ����ֵ�����ֵ��ԭ����maxid��ֵ����
	//ѭ�������Ʊ������������β���߻���
	for (int i = len-1; i > 0; i--) //i����0ʱ���У������1����Ϊ���ֻȷ����1,0��ȷ������С��
	{
		int maxid = max(a, i+1);//��0��i+1��������һ�����ģ��ٽ���
		//swap a[maxid] , a[len-1]
		int t = a[maxid];
		a[maxid] = a[i];//iΪ�±�
		a[i] = t;
		printf("%d ",maxid);//���ÿ�ε�maxid
	}
	printf("\n");

	//�����������
	for (int i = 0; i < len; i++)
	{
		printf("%d ",a[i]);
	}
	
	//�ҵ�maxid���±꣬�����һ����������
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

//���ַ�����
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
////���������������ź���������Կ�������
//int main() {
//	int k = 10;
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));
//	printf("%d\n",r);
//	return 0;
//}



//��������ֵ���ֺ�ֵ����һ��
//�ṹ��
//int amount[] = { 1,5,10,25,50 };
//int* name[] = {"penny","nickel","dime","quarter","half-dollar"};
//
//struct 
//{
//	int amount;
//	char* name;
//} coins[] = { //������ṹ����һ��coins������
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
//	//int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));//10��amount�����������
//	//����search������������������
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


//��������ѭ��
//int amount[] = { 1,5,10,25,50 };
//int* name[] = {"penny","nickel","dime","quarter","half-dollar"};
//
//int search(int key,int a[],int len) {
//	int ret = -1;
//	//�������
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
//	int r = search(k, amount, sizeof(amount) / sizeof(amount[0]));//10��amount�����������
//	if (r > -1)
//	{
//		printf("%s\n",name[r]); //r��������������
//		printf("%d\n", r);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//��������
//int search(int key,int a[],int len) {
//	int ret = -1;
//	//�������
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
