#ifndef GAME_H
#define GAME_H

#include <stdio.h> // 包含标准输入输出头文件
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
// 打印棋盘
void displayBoard(char board[ROW][COL], int row, int col);
// 玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
// 电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);
// 判断输赢
#endif // GAME_H
