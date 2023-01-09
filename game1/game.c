#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++) {
			board[i][j] = ' '; //初始化棋盘，单引号里面放空格
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//一行数据，一行分隔
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.打印一行数据
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]); // 以列为单位打印竖杠
			if (j < col - 1)
				printf("|"); //最后列最后没有竖杠
		}
		printf("\n");
		//2.打印分隔行
		if (i < row - 1) {
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col) 
{
	int x = 0;
	int y = 0;
	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//用户1 1 => 对应数组坐标0 0
			if (board[x-1][y-1] == ' ') //说明还没有下棋
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1) 
	{
		x = rand() % row; //求模，余数在0 -- row-1之间
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//返回1表示棋盘满了，0表示没满
int isFull(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for ( i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++) {
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;//满了
}


// 继续 - 'C'
char IsWin(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	//横三行
	for ( i = 0; i < row; i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//3个相等，返回任何一个都可以
		}
	}
	//竖三列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[i][1];//3个相等，返回任何一个都可以
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] ==board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//3个相等，返回任何一个都可以
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];//3个相等，返回任何一个都可以
	}
	//判断是否平局
	if (1 == isFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}