#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//������
int main() {
	int arr[10] = {1,2,3,4,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������) - ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	//2. &�������������������������飬&��������ȡ��������������ĵ�ַ
	printf("%p\n", arr);  //��1��Ԫ�صĵ�ַ
	printf("%p\n", arr+1);  //��1��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]); //��1��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]+1); //��1��Ԫ�صĵ�ַ
	printf("%p\n", &arr);  //&arr - ����ĵ�ַ
	printf("%p\n", &arr+1);  //&arr - ����ĵ�ַ

	//ͨ������£�����������Ԫ�صĵ�ַ
	//printf("%p\n", arr);
	//printf("%p\n", &arr[0]);
	//printf("%d\n", *arr);
	return 0;
}


//void bubble_sort(int arr[],int sz) {  //ÿ�δ���sz������˷�
//	//ȷ��ð�����������
//	int i = 0;
//
//	//������&arr[0]ʱ���൱��4/4=1
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//szʱҪ����sz-1��ð��
//	for ( i = 0; i < sz-1; i++) //һ������9������
//	{
//		//ÿһ��ð������
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)  //��1�ˣ�9�� ��2�ˣ�8��
//		{
//			//����
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}

//���������ð������
//void bubble_sort(int arr[], int sz) {  //ÿ�δ���sz������˷�
//	//ȷ��ð�����������
//	int i = 0;
//	//szʱҪ����sz-1��ð��
//	for (i = 0; i < sz - 1; i++) //һ������9������
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)  //��1�ˣ�9�� ��2�ˣ�8��
//		{
//			//����
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)  //û�н��н���������
//		{
//			break;
//		}
//	}
//}
//
////ð������
//int main() {
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int arr[] = { 9,1,2,3,4,5,6,7,8 };//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //������������ĳ���
//	//��arr���������ų�����
//	//arr�����飬������arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	//�൱�ڴ���ȥ����  &arr[0]  arr[0]�ĵ�ַ
//	bubble_sort(arr,sz);//ð��������
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//��ά����Ĵ���
//int main() {
//	//int arr[3][4] = {1,2,3,4,5};
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	//for ( i = 0; i < 3; i++)
//	//{
//	//	int j = 0;
//	//	//1��
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
//		//1��
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

//�����е��ڴ�
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]); //��ӡ��ַ
//	}
//	return 0;
//}


//�����������Ԫ��
//int main() {
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//for ( i = 0; i < (int)strlen(arr); i++)
//	//{
//	//	printf("%c ",arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//  �ܴ�С/Ԫ�ش�С=Ԫ�ظ���
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
//	printf("%d\n", strlen(arr2));//���ֵ
//	return 0;
//}


//int main() {
//
//	//����һ������- ������� - 10��
//	int arr[10] = {1,2,3};//����ȫ��ʼ������ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 
//	char arr2[5] = {'a','b'};
//	//����ĳ�ʼ����ʽ
//	//int n = 10;
//	//char ch[n]; //err����,���ܷű���
//	char arr3[5] = "abc";
//
//	//����ӳ�ֵ�Ĵ�������
//	char arr4[] = "abcdef";
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� - char 7*1 = 7
//	printf("%d\n",sizeof(arr4));//7
//
//	//strlen-���ַ����ĳ���-'\0' ֮ǰ���ַ�����
//	//[a b c d e f \0]
//	//6
//	printf("%d\n", strlen(arr4));//6
//
//	//1.strlen��sizeofû��ʲô����
//	//2.strlen�����ַ������ȵ�- ֻ������ַ����󳤶�-�⺯��
//	//3.sizeof������������顢���͵Ĵ�С - ��λ���ֽ� - ������
//	
//	return 0;
//}