#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int a, b, c;
	a = 5;
	c = ++a;//c=6,a=6
	b = ++c, c++, ++a, a++;
	//���ű��ʽ��һֱ�����㣬���һ�����ʽ�Ÿ���b
	//�����������������ʽ���������ʽ��ֵΪ���һ�����ʽ��ֵ��
	//c=8 ԭ��a=6,++a��a=7,a++��a��ǰ��ֵ����b,����b=7,��ʱa++��a=8
	b += a++ + c; //�ӷ������ȼ��ȼӵ��ڸߡ�a++ + c =8+8=16,����Ҫ�ӵ�ԭ����b�ϣ�����16+7=23.����a=9
	printf("a=%d b=%d c=%d\n", a, b, c);//a = 9 b=23 c=8
	return 0;
}


//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main() {
//	i--;
//	//-1
//	//10000000000000000000000000000001   -1��ԭ��
//	//11111111111111111111111111111110  ����
//	//11111111111111111111111111111111  ���룺����+1
//	//sizeof���������޷������������λ��1Ҳ���ϣ���������úܴ�һ������-1
//
//	if (i>sizeof(i)) //sizeof()-�������/������ռ�ڴ�Ĵ�С >= �޷�����
//	{
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}


//int main() {
//	int a = 0x11223344;//�Ž��ڴ�飺���ŷ�  44 33 22 11����ռ1�ֽ�
//	char* pc = (char*)&a;//char* :�ַ��ͣ�*pcֻ�ܲ���1���ֽ�
//
//	*pc = 0;
//	printf("%x\n", a);//��ԭ������11 22 33 00
//	return 0;
//}

////�ж������ֵ
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for ( i = 0; i < 5; i++)
//	{
//		printf("%d ",arr[i]);//00345
//	}
//	return 0;
//}


//��������Ľ���(����һ����)
//����ֱ����=����,��Ҫ����
//tmpһ��ֻ��һ��ֵ����ǰҪ������ֵ��
//���飺��Ҫ�ѵ�ַ�Ž�ȥ
//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz;i++) {
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}


//ָ��û�б䣬ָ������ĵ�1��Ԫ�ص�ַ��ͨ��arr��������ֵ
//void Init(int arr[],int sz) { //ֻ��arr,ָ���ǵ�1��Ԫ�صĵ�ַ��ÿ��sz��ֵ����1�����Դ����洫sz��ֵ����
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;//arr[i]ȡ���ض����飬iΪ����ֵ
//	}
//}
//
//void Print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//
//void Reverse(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
////����
//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//�������ʼ��Ϊ0
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	printf("\n");
//	Print(arr, sz);//��ӡ
//	return 0;
//}

//int main() {
//	{
//		int a = 0;//�����ڷ�������ж���ı���ֻ���ڸ��������ʹ��
//	}
//	//printf("%d\n", a);//����
//}

//�ú��� - ����
// ָ������ - ���� - ���ָ�������
//����ָ�� - ָ��
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//	//�������� - �������
//	//�ַ����� - ����ַ�
//	//ָ������ - ���ָ��
//	int arr1[10];
//	int* arr2[3] = {&a,&b,&c};//ָ������
//	int i = 0;
//	for (i = 0; i < 3;i++) {
//		printf("%d ", *(arr2[i]));//�����÷��ţ���ӡ�������ֵ
//	}
//	return 0;
//}


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