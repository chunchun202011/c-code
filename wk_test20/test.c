#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//字符串搜索函数
int main(int argc,char const *argv[]) {
	char s[] = "hello";
	char* p = strchr(s, 'l');
	char c = *p;//拷贝前面一段，用c临时存*p
	*p = '\0';
	//char* t = (char*)malloc(strlen(p) + 1); //把p以后的所有东西都拷贝过去，申请一块这么大的空间为t
	char* t = (char*)malloc(strlen(s) + 1);
	//strcpy(t, p);//把p的东西拷到t去
	strcpy(t, s);
	printf("%s\n",t);
	free(t);//把malloc的值释放
	return 0;
}


//stcpy
//char* mycpy(char* dst, const char* src) {
//	
//	//数组版本
//	//int idx = 0;//src走第几个；dst走第几个
//	//while (src[idx] != '\0')
//	//或while直接写成如下：
//	//while (src[idx]) //表示不等于0的意思
//	//{
//	//	dst[idx] = src[idx];
//	//	idx++;
//	//}
//	//dst[idx] = '\0';
//
//
//	//指针版本
//	//记录一下原来的指针位置（后面要返回原来的dst）
//	char* ret = dst;
//	//while (*src != '\0')
//	//{
//	//	*dst = *src;
//	//	dst++;
//	//	src++;
//	//}
//
//	while (*src)
//	{
//		*dst++ = *src++;
//	}
//
//	*dst = '\0';
//	
//	return ret;
//}
//
//int main(int argc,char const *argv[]) {
//	char s1[] = "Abc";
//	char s2[] = "abc";
//	strcpy(s1, s2);
//	return 0;
//}



//自定义cmp
// 写法二：指针自身的++,直接用指针取值
//int mysmp(const char *s1, const char *s2) {
//	while (*s1 == *s2 && *s1 != '\0') //相等的时候让指针++
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2; //不相等的时候return
//}



// 写法一
//int mycmp(const char *s1,const char *s2) {
//	int idx = 0;
//	while (s1[idx] == s2[idx] && s1[idx] != '\0')
//	{
//
//		//可以把while循环里面这一大段用来做while循环的条件
//	//while (1)
//	//{
//		//if (s1[idx] != s2[idx]) {
//		//	break;
//		//}
//		//else if(s1[idx] == '\0')
//		//{
//		//	break;
//		//}
//		idx++;
//	}
//	return s1[idx] - s2[idx];
//}

//int main() {
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	//printf("%d\n",s1==s2);//不能这样比较，永远是不相同的，比较的是两个数组的地址
//	printf("%d\n",mycmp(s1,s2));
//	printf("%d\n",'a' - 'A');
//
//	return 0;
//}


//int main() {
//	char s1[] = "abc";
//	char s2[] = "Abc";
//	//printf("%d\n",s1==s2);//不能这样比较，永远是不相同的，比较的是两个数组的地址
//	printf("%d\n",strcmp(s1,s2));
//	printf("%d\n",'a' - 'A');
//
//	return 0;
//}


//size_t mylen(const char* s) {
//	int idx = 0; //index
//	//不知道数组有多大：while循环
//	while (s[idx] != '\0') //遍历的下标不等于\0
//	{
//		idx++;//index指向下一个
//
//	}
//	return idx;
//}
//
//int main() {
//	char line[] = "Hello";
//	//printf("strlen=%lu\n",strlen(line));//strlen=5
//	printf("strlen=%lu\n", mylen(line)); //strlen=5
//	printf("sizeof=%lu\n", sizeof(line));//sizeof=6,后面有个反斜杠0
//	return 0;
//}


//size_t是sizeof操作符返回的结果类型
//size_t mylen(const char* s) {
//	int cnt = 0;
//	int idx = 0; //index
//	//不知道数组有多大：while循环
//	while (s[idx] != '\0') //遍历的下标不等于\0
//	{
//		idx++;//index指向下一个
//		cnt++;
//	}
//	return cnt;
//}
//
//int main(){
//	char line[] = "Hello";
//	//printf("strlen=%lu\n",strlen(line));//strlen=5
//	printf("strlen=%lu\n", mylen(line)); //strlen=5
//	printf("sizeof=%lu\n", sizeof(line));//sizeof=6,后面有个反斜杠0
//	return 0;
//}
