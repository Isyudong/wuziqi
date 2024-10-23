#include "game.h"

void menu()
{
    printf("**********************\n");
    printf("****1.play  0.exit****\n");
    printf("**********************\n");
}

void game()
{
    char board[ROW][COL] = {0};
    // 初始化棋盘
    InitBoard(board, ROW, COL);
    // 打印棋盘
    displayBoard(board, ROW, COL);
    // 下棋
    while (1)
    {
        PlayerMove(board, ROW, COL);
        displayBoard(board, ROW, COL);

        ComputerMove(board, ROW, COL);
        displayBoard(board,ROW,COL);

    }
}

int main()
{
    srand((unsigned int)time(NULL));//设置随机生成起点的
    int input = 0;
    do
    {
        menu(); // 打印菜单
        printf("请选择：");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);
    return 0;
}