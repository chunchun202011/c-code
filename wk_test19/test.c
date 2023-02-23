#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//自定义cmp
// 写法二：指针自身的++,直接用指针取值
int mysmp(const char *s1, const char *s2) {
	while (*s1 == *s2 && *s1 != '\0') //相等的时候让指针++
	{
		s1++;
		s2++;
	}
	return *s1 - *s2; //不相等的时候return
}


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

int main() {
	char s1[] = "abc";
	char s2[] = "Abc";
	//printf("%d\n",s1==s2);//不能这样比较，永远是不相同的，比较的是两个数组的地址
	printf("%d\n",mycmp(s1,s2));
	printf("%d\n",'a' - 'A');

	return 0;
}


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
