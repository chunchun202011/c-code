#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//�ַ�������
int main(int argc, char const *argv[]) {
	int i;
	for ( i = 0; i < argc; i++)
	{
		printf("%d:%s\n",i,argv[i]);
	}
	return 0;
}
//int main() {
//	//a[0] -> char *
//	char* a[] = {
//		"Hello",
//		"World",
//		"hahahahahaha"
//	};
//
//	return 0;
//}


//���ַ�����
//int main() {
//	int ch;
//	while ( (ch = getchar()) != EOF )
//	{
//		putchar(ch);
//	}
//	printf("EOF\n");
//	return 0;
//}


//free
//int main() {
//	int i;
//	void* p = 0;
//	int cnt = 0;
//
//	free(p);
//	return 0;
//}


//int main() {
//	int i;
//	void* p;
//	int cnt = 0;
//	//p = malloc(100 * 1024 * 1024);
//	//p++;
//	p = &i; //p��ָ�룬������malloc���ģ�����������ĵ�ַ
//	free(p);
//
//	return 0;
//}


//int main(void) {
//	void* p;
//	int cnt = 0;
//	//ÿ������100MB�ռ䣬�����뵽�Ŀռ佻��p����ֵ���ʽ
//	while ((p=malloc(100*1024*1024)))//1024:1K �˴�100MB
//	{
//		cnt++;
//	}
//	//p�õ��ĵ�ַΪ0������whileѭ��
//	printf("������%d00MB�Ŀռ�\n",cnt);
//	return 0;
//}


////��̬�ڴ������������ռ�
//int main(void){
//	int number;
//	int* a;
//	int i;
//	printf("����������");
//	scanf("%d",&number);
//	a = (int*)malloc(number*sizeof(int)); //��malloc�õ�һ��ռ䣬��������a
//	for ( i = 0; i < number; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//���������������
//	for ( i = number-1; i >= 0; i--)
//	{
//		printf("%d ",a[i]);//�Ѷ�̬�ڴ����õ���aֱ��������������
//	}
//	free(a);//�ͷ�a���ڴ�
//
//	return 0;
//}
