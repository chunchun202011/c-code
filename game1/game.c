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
			board[i][j] = ' '; //��ʼ�����̣�����������ſո�
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	//һ�����ݣ�һ�зָ�
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.��ӡһ������
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]); // ����Ϊ��λ��ӡ����
			if (j < col - 1)
				printf("|"); //��������û������
		}
		printf("\n");
		//2.��ӡ�ָ���
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
	printf("�����:>\n");
	while (1)
	{
		printf("������Ҫ�µ����꣺");
		scanf("%d%d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//�û�1 1 => ��Ӧ��������0 0
			if (board[x-1][y-1] == ' ') //˵����û������
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ�ã�\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����ߣ�>\n");
	while (1) 
	{
		x = rand() % row; //��ģ��������0 -- row-1֮��
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

//����1��ʾ�������ˣ�0��ʾû��
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
	return 1;//����
}


// ���� - 'C'
char IsWin(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	//������
	for ( i = 0; i < row; i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//3����ȣ������κ�һ��������
		}
	}
	//������
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[i][1];//3����ȣ������κ�һ��������
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] ==board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//3����ȣ������κ�һ��������
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];//3����ȣ������κ�һ��������
	}
	//�ж��Ƿ�ƽ��
	if (1 == isFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}