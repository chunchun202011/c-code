#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//��ͬ���͵�ָ�벻���໥��ֵ
int main(void) {
	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
	char* p = &ac[0];
	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* q = ai;
	q = p;//����
	return 0;
}


////��������
//int main(void) {
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9,-1 };
//	char* p = &ac[0];
//	int i;
//	for ( i = 0; i < sizeof(ac) / sizeof(ac[0]); i++)
//	{
//		printf("%d\n",ac[i]);
//	}
//	//for (p=ac; *p!= -1;p++)
//	//for (p = ac; *p != -1; )
//	//{
//	//	printf("%d\n",*p++);//�˴�forѭ����++����ʡ��
//	//}
//
//	//Ҳ����while
//	while (*p!=-1) //-1������Ϊһ�����������һ����β��־
//	{
//		printf("%d\n", *p++);
//	}
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* q = ai;
//	return 0;
//}


////ָ������
//int main() {
//	char ac[] = { 0,1,2,3,4,5,6,7,8,9 };
//	char* p = &ac[0];
//	char* p1 = &ac[5];
//	
//	printf("p  =%p\n",p);
//	printf("p+1=%p\n", p+1);
//	//printf("*p= %d\n", *p);
//	//printf("*(p+1)= %d\n", *(p+1));
//	printf("p1-p= %d\n", p1-p);
//	//*p -> ac[0]
//	//*(p+1) -> ac[1] 
//	//*(p+n) <=> ac[n]
//	int ai[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int *q = ai;
//	int* q1 = &ai[6];
//	printf("q  =%p\n", q);
//	printf("q1=%p\n", q1);
//	printf("q1-q=%d\n", q1-q);
//	return 0;
//}


//ָ�������飺Ϊʲô���鴫���������sizeof������.
//void minmax(int a[], int len, int  *max, int *min);
//
//int main(void) {
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
//	int min = 0;
//	int max=0;
//	printf("main sizeof(a)=%lu\n",sizeof(a));
//	printf("main a=%p\n",a);
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("a[0]=%d\n",a[0]);//a[0]��ֵ���Ķ�
//	printf("min=%d,max=%d\n",min,max);
//
//	return 0;
//}
//
//void minmax(int a[], int len, int* min, int* max) {
//	int i;
//	printf("minmax sizeof(a)=%lu\n",sizeof(a));
//	printf("minmax a=%p\n", a);
//	a[0] = 1000; //��minmax�����a[0]��ֵ
//	printf(" min=%p\n",min);
//	*min = *max = a[0];
//
//	for ( i = 1; i < len; i++)
//	{
//		if (a[i] < *min) {
//			*min = a[i];
//		}
//		if (a[i] > *max) {
//			*max = a[i];
//		}
//	}
//}


/**
 * ��������ָ��δ��ֵʵ�ʱ����ĵ�ַ�Ϳ�ʼʹ��.
 * 
 * \return 
 */
//int main() {
//	int i = 6;
//	int *p;
//	int k;
//	k = 12;
//	*p = 12;
//	
//	printf("&i=%p\n",&i);
//	f(&i);
//	g(i);
//
//	return 0;
//}
//
//void f(int *p) {
//	printf(" p=%p\n",p);
//	printf("*p=%d\n", *p);
//}
//
//void g(int k) {
//	printf("k=%d\n",k);
//}



//����ֵ�ͽ���ֿ�����
/**
* Ӧ�ó��������������ܻ�������ض���ֵ��
 * @return ��������ɹ�������1�����򷵻�0.
 */
//int divide(int a, int b, int *result); //����Ľ��ͨ��resultָ�뽻����
//
//int main(void) {
//	int a = 5;
//	int b = 2;
//	int c;
//	if (divide(a,b,&c))
//	{
//		printf("%d/%d=%d\n",a,b,c);
//	}
//	return 0;
//}
//
//int divide(int a, int b, int *result) { //�����ַ
//	int ret = 1;
//	if (b == 0) ret = 0; //�������0������ֵΪ0
//	else
//	{
//		*result = a / b; //����������  result��һ��ָ�������*result���������ԭ�����ֵ
//	}
//	return ret;
//}



//�������:��������Сֵ��������ָ�뷵��ֵ
//void minmax(int a[], int len, int* max, int* min);
//
//int main(void) {
//	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
//	int min, max;
//	//���㳤�ȴ����������������forѭ��
//	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
//	printf("min=%d,max=%d\n",min,max);
//
//	return 0;
//}
//
//void minmax(int a[], int len, int* max, int* min) {
//	int i;
//	*min = *max = a[0];
//	for ( i = 1; i < len; i++)
//	{
//		if (a[i] < *min) {
//			*min = a[i];
//		}
//		if (a[i] > *max) {
//			*max = a[i];
//		}
//	}
//}



//��������������ֵ
//void swap(int *pa ,int *pb);
//
//int main() {
//	int a = 5;
//	int b = 6;
//	swap(&a, &b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}
//
////��������������ֵ
//void swap(int *pa,int *pb) {
//	int t = *pa; //int t ���ռ��ɣ���˼��t��ֵ���pa�ĵ�ַ������Ϊint *t����,��pa�ĵ�ַ��ֵ��t�ĵ�ַ
//	*pa = *pb;
//	*pb = t;
//}
