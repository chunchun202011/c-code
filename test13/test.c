#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ú��� - ����
// ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ��
	int arr1[10];
	int* arr2[3] = {&a,&b,&c};//ָ������
	int i = 0;
	for (i = 0; i < 3;i++) {
		printf("%d ", *(arr2[i]));//�����÷��ţ���ӡ�������ֵ
	}
	return 0;
}


//����ָ��
//int main() {
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; // ppa�Ƕ���ָ��
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