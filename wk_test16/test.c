#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


int main(int argc,char const *argv[]) {
	char s1[] = "abc";
	char s2[] = "abc ";
	printf("%d\n",strcmp(s1,s2));
	printf("%d\n",'a'-'A');
	return 0;
}

//string.h头文件的用法
//int main() {
//	char line[] = "Hello";
//	printf("strlen=%lu\n",strlen(line));//5 5个字符
//	printf("sizeof=%lu\n", sizeof(line));//6 还有1个\0 表示所占用内存空间
//	return 0;
//}


//字符串输入输出越界情况
//void f(void) {
//	char word[8];
//	char word2[8];
//	scanf("%7s", word);
//	scanf("%7s", word2);
//	printf("%s##%s\n", word, word2);
//}
//
//int main(void) {
//	f();
//	return 0;
//}


//字符串输入输出
//int main() {
//	char word[8];
//	char word2[8];
//	scanf("%s",word);
//	scanf("%s",word2);
//	printf("%s##%s\n",word,word2);
//
//	return 0;
//}

//字符串常量
//int main() {
//	int i = 0;
//	char* s = "Hello World";
//	char* s2 = "Hello World";
//	char s3[] = "Hello World";
//
//	printf("&i=%p\n",&i);
//	printf("s =%p\n",s);
//	printf("s2=%p\n", s2);
//	printf("s2=%p\n", s3);
//	s3[0] = 'B';
//	printf("Here! s3[0]=%c\n",s3[0]);
//
//	return 0;
//}

//英尺英寸和米的转换
//int main() {
//	printf("请分别输入身高的英尺和英寸\
//如输入\"5 7\" 表示5英尺7英寸");
//	double foot;
//	double inch;
//
//	scanf("%lf %lf",&foot,&inch);
//
//	printf("身高是%f米。\n",
//		(foot + inch / 12) * 0.3048 );
//
//	return 0;
//}


//逃逸字符
//int main() {
//	//制表符
//	printf("123\t456\n");
//	printf("12\t456\n");
//	return 0;
//}


//int main() {
//	char c = 'A';
//	c++;
//	printf("%c\n",c);
//
//	return 0;
//}


//有无空格的情况
//int main() {
//	int i;
//	char c;
//	//scanf("%d %c",&i,&c);
//	scanf("%d%c", &i, &c);
//	printf("i=%d,c=%d,c='%c'\n", i, c, c);
//	return 0;
//}


//将int的值赋给char
//int main() {
//	int i;
//	char c;
//	scanf("%d",&i);//scanf只能处理int,不能处理char
//	c = i;
//	printf("c=%d\n",c);
//	printf("c='%c'\n", c);
//
//	if (49 == '1')
//	{
//		printf("OK");
//	}
//
//	return 0;
//}


//判断两者是否相等
//int main() {
//	char c;
//	char d;
//	c = 1;
//	d = '1';
//	if (c == d)
//	{
//		printf("相等\n");
//	}
//	else
//	{
//		printf("不相等\n");
//	}
//	printf("c=%d\n",c);
//	printf("d=%d\n", d);
//	return 0;
//}
