/*
��Ŀ����ʧ��ʱ��
*/

#include <stdio.h>
#include "func.h"

int main()
{
	Interface();
	printf("����������Ǳ�Ӱ");
	return 0;
}

int Interface()
{
	printf("\n\n");
	cro(60);
	
	int num;
	printf("��ӭ���� ����ʧ��ʱ�䡱 \n");
	printf("1.Ӣ��\n");
	printf("2.����\n");
	printf("3.Quit.\n");
	printf("�����룺");
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
		printf("������Ч��\n");
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
	struct Hero H = { 10, 1, "����" };
	cro(60);
	printf("Ӣ��   �˺�   �ȼ�\n");
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
		printf("��%d��\n", i+1);
		
		for (int j = 0; j < 1; j++)
		{
			M.xue + 10; M.hurt + 2;
			printf("Ѫ��   �˺�\n");
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
