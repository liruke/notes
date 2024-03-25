//这个文件完成主逻辑

#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//在地图上布置10个雷
//排查雷：如果位置是雷，就炸死，游戏结束
//不是雷，就统计坐标周围的雷的个数并显示
//如果把所有非雷的位置找到，游戏结束(获胜)
//存放数据的类型太多，容易产生歧义    在统计一个坐标周围的雷的时候可能会越界
//将数组扩大一圈，

//内容涉及：二维数组，
void menu()
{
	printf("***********************\n");
	printf("*      1.play         *\n");
	printf("*      0.exit         *\n");
	printf("***********************\n");
}
void game()
{
	//放雷的棋盘
	char mine[ROWS][COLS];

	//打印出来的周围雷的信息的棋盘
	char show[ROWS][COLS];

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//'0'
	InitBoard(show, ROWS, COLS, '*');//'*'
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	// 
	//1.布置雷：
	SetMine(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:");
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
			printf("选择错误请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}