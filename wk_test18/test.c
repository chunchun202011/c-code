#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//字符串数组
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


//单字符输入
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
//	p = &i; //p是指针，但不是malloc来的，是另外变量的地址
//	free(p);
//
//	return 0;
//}


//int main(void) {
//	void* p;
//	int cnt = 0;
//	//每次申请100MB空间，将申请到的空间交给p，赋值表达式
//	while ((p=malloc(100*1024*1024)))//1024:1K 此处100MB
//	{
//		cnt++;
//	}
//	//p得到的地址为0：跳出while循环
//	printf("分配了%d00MB的空间\n",cnt);
//	return 0;
//}


////动态内存分配申请数组空间
//int main(void){
//	int number;
//	int* a;
//	int i;
//	printf("输入数量：");
//	scanf("%d",&number);
//	a = (int*)malloc(number*sizeof(int)); //用malloc得到一块空间，把它交给a
//	for ( i = 0; i < number; i++)
//	{
//		scanf("%d",&a[i]);
//	}
//	//逆序输出所有数字
//	for ( i = number-1; i >= 0; i--)
//	{
//		printf("%d ",a[i]);//把动态内存分配得到的a直接用数组拿来用
//	}
//	free(a);//释放a的内存
//
//	return 0;
//}
