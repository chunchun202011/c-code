#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "game.h" //引入ROW,COL
//测试三子棋游戏

void menu() {
	printf("*****************************\n");
	printf("****  1.play      0.exit*****\n");
	printf("*****************************\n");
}





//游戏的整个算法实现
void game() {
	char ret = 0;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 }; //头文件
	//初始化棋盘
	InitBoard(board,ROW,COL);//不管数组里是什么，初始化后都是空格
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if(ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局");
	}
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}