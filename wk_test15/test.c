#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
void minmax(int *a, int len, int *max, int *min);

//ָ��������
int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55 };
	int min, max;
	printf("main sizeof(a)=%lu\n", sizeof(a));
	printf("main a=%p\n", a); //���main��a�ĵ�ַ
	minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
	printf("a[0]=%d\n", a[0]); //���a[0]��ֵ
	printf("min=%d,max=%d\n",min,max);
	int* p = &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	printf("*a=%d\n",*a);


	return 0;
}

void minmax(int *a, int len, int* min, int* max) {
	int i;
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	printf("minmax a=%p\n", a); //���minmax��a�ĵ�ַ
	a[0] = 1000;
	*min = *max = a[0];
	for ( i = 1; i < len; i++)
	{
		if (a[i] < *min) {
			*min = a[i];
		}
		if (a[i] > *max)
		{
			*max = a[i];
		}
	}
}


//void f(int *p);
//void g(int k);
//
//int main() {
//	int i = 6;
//	printf("&i=%p\n",&i);//���i�ĵ�ַ
//	f(&i); //ȡ����ַ������f����
//	g(i);//�������һ��g������ֻ�ܵõ�����ֵ
//	return 0;
//}
//
//void f(int *p) {
//	printf(" p=%p\n",p);//�������ĵ�ַ
//	printf("*p1=%p\n",*p);//�������ĵ�ַ
//	*p = 26;
//	printf("*p=%p2\n", *p);//�������ĵ�ַ
//}
//
//void g(int k) {
//	printf("k=%d\n",k);
//}

//ȡ�������
//int main() {
//	int a[10];
//
//	printf("%p\n",&a);
//	printf("%p\n", a);//ֱ��ȡa�ĵ�ַ
//	printf("%p\n", &a[0]);
//	printf("%p\n", &a[1]);
//	return 0;
//}


//int main(void) {
//
//	int i = 0;
//	int p = 0;
//
//	printf("%p\n", &i);
//	printf("%p\n", &p);

	//p = (int)&i;
	//�����ȡ��
	//p = (int)&(i++);
	//p = (int)&(++i);

	//printf("0x%x\n",p);
	//printf("%p\n", &i);
	//printf("%lu\n",sizeof(int));
	//printf("%lu\n", sizeof(&i));
	//printf("%lu\n", sizeof(&p));


	//int i = 0;
	//printf("0x%x\n",&i);//���棺���������ַ�ʽ�����ַ
	//printf("%p\n",&i);//�����ַ��%p
//	return 0;
//}


//sizeof
//int main(){
//	int a;
//	a = 6;
//	printf("sizeof(double)=%ld\n", sizeof(double));
//	printf("sizeof(a)=%ld\n",sizeof(a));
//	return 0;
//}
