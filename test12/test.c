#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main() {
	int arr[10] = { 0 };
	printf("%p\n", arr);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", arr+1);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", &arr[0]+1);//��ַ-��Ԫ�صĵ�ַ
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	//1.&arr - &������ - ������������Ԫ�صĵ�ַ����������ʾ��������- &������ȡ����������ĵ�ַ
	//2.sizeof(arr) - sizeof(������) - ��������ʾ��������- sizeof(������)������������Ĵ�С
	return 0;
}

//ָ��-ָ��
//int my_strlen(char* str) //��Ԫ�صĵ�ַ��char
//{
//	char* start = str;
//	char* end = str;
//	while (*end != 0) {
//		end++;
//	}
//	//end-start:�м�Ԫ�ظ���
//	return end - start;
//}
//
//
//int main() {
//	// strlen-���ַ�������
//	// �ݹ� - ģ��ʵ����strlen- �������ķ�ʽ1���ݹ�ķ�ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main() {
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ��-ָ��=�м��Ԫ�ظ���
//	printf("%d\n", &arr[9] - &arr[0]);//9
//	printf("%d\n", &arr[9] - &ch[0]);//����֪�ģ������
//	return 0;
//}


//ָ��+������
//#define N_VALUES 5
//int main() {
//	float values[N_VALUES];
//	float* vp;
//	//ָ��+-������ָ��Ĺ�ϵ����
//	//for (vp = &values[0]; vp > &values[N_VALUES];)
//	//{
//	//	*--vp = 0;
//	//}
//	for (vp = &values[N_VALUES];  vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}


//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	//for ( i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1; //ָ�����
//	//}
//	//for (i = 0; i < 5; i++) {
//	//	printf("%d ", *p);
//	//	p += 2;//13579
//	//}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", *p);
//		p -= 2;//13579
//	}
//	return 0;
//}


//Ұָ��
//// ָ��Խ�����
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}

//int main() {
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ�ָ�����������ʼ�����ֵ
//	*p = 20; //ָ��Ŀռ䲻֪�����������ڴ����ҵ�һ���ռ�
//
//	return 0;
//}

//int main() {
//	int arr[10] = { 0 };//����һ�������ڴ�ռ�
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	char* p = arr;//������-��Ԫ�صĵ�ַ
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main() {
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}


//int main() {
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	return 0;
//}


//int main() {
//	int a = 10;
//	int* p = &a;//ָ����� pָ��
//	//p�Ǵ�ŵ�ַ�ı���
//	//ָ����һ�������������ŵ��ǵ�ַ��Ҳ��˵ָ����ǵ�ַ����ַ����ָ��
//	return 0;
//}