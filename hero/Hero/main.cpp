/*
项目：流失的时间
*/

#include <stdio.h>
#include "func.h"

int main()
{
	Interface();
	printf("他留给你的是背影");
	return 0;
}

int Interface()
{
	printf("\n\n");
	cro(60);
	
	int num;
	printf("欢迎来到 “流失的时间” \n");
	printf("1.英雄\n");
	printf("2.怪物\n");
	printf("3.Quit.\n");
	printf("请输入：");
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		hero();
		Interface();

	case 2:
		monster();
		Interface();

	case 3:
		return 0;
	default:
		printf("输入无效！\n");
		Interface();
	}
	return 0;
}

int hero()
{
	struct Hero
	{
		int hurt;
		int level;
		char name[];
	};
	struct Hero H = { 10, 1, "忍者" };
	cro(60);
	printf("英雄   伤害   等级\n");
	printf("%s   %i     %i\n", H.name ,H.level, H.hurt);
	cro(60);
	return H.hurt;
}

struct Monster
{
	int xue;
	int hurt;
};
struct Monster M = { 100, 5 };

int monster()
{
	for (int i = 0; i < 100; i++)
	{
		printf("第%d层\n", i+1);
		
		for (int j = 0; j < 1; j++)
		{
			M.xue + 10; M.hurt + 2;
			printf("血量   伤害\n");
			printf("%d    %d\n", M.xue, M.hurt);
		}

	}
	return 0;
}

int cro(int c)
{
	char a = '=';
	for (int b = 0; b < c; b++)
	{
		printf("%c", a);
	}
	printf("\n");
	return 0;
}
