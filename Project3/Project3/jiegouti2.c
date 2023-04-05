#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int n = 0;
typedef struct {
	char no[10], name[10];
	int cj1, cj2, cj3;
}stu;
void ym()
{
	system("cls");
	printf("|~~~~~~~~~~~~~~~~~~~~~|\n");
	printf("| 请输入选项编号（0-6）|\n");
	printf("|~~~~~~~~~~~~~~~~~~~~~|\n");
	printf("|      1.初始化       |\n");
	printf("|      2.显示         |\n");
	printf("|      3.查找         |\n");
	printf("|      4.添加         |\n");
	printf("|      5.删除         |\n");
	printf("|      6.排序         |\n");
	printf("|      0.退出         |\n");
	printf("|~~~~~~~~~~~~~~~~~~~~~|\n");
}
void Init(stu d[])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%s %s %d %d %d", &d[i].no, &d[i].name, &d[i].cj1, &d[i].cj2, &d[i].cj3);
	}
	n = 3;
}
void Add(stu d[])
{
	printf("请输入学号\n");
	scanf_s("%s", &d[3].no);
	printf("请输入姓名\n");
	scanf_s("%s", &d[3].name);
	printf("请输入成绩\n");
	scanf_s("%d %d %d", &d[3].cj1, &d[3].cj2, &d[3].cj3);
	getchar();
	n++;
}
void Del(stu d[])
{
	int i, b;
	printf("请输入要删除学生的学号\n");
	scanf_s("%d", &b);
	for (i = b - 1; i < n; i++)
	{
		d[i] = d[i + 1];
	}
	n--;
}
void Print(stu d[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%s %s %d %d %d\n", d[i].no, d[i].name, d[i].cj1, d[i].cj2, d[i].cj3);
	}

}
void Sort(stu d[])
{
	int i;
	stu tmp;
	for (i = 0; i < n; i++)
	{
		if (strcmp(d[i].no, d[i + 1].no) > 0)
		{
			d[i] = d[i + 1];
			tmp = d[i];
			d[i + 1] = tmp;
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%s %s %d %d %d\n", d[i].no, d[i].name, d[i].cj1, d[i].cj2, d[i].cj3);
	}
}
void Search(stu d[])
{
	printf("请输入要查询的学号\n");
	int n;
	scanf_s("%d", &n);
	printf("%s %s %d %d %d\n", d[n - 1].no, d[n - 1].name, d[n - 1].cj1, d[n - 1].cj2, d[n - 1].cj3);
}
int main()
{
	stu stu1[100];
	char choose, yn;

	do
	{
		ym();
		choose = _getche();
		switch (choose)
		{
		case '1':
			printf("\n");
			printf("输入三个初始化学生\n");
			Init(stu1);
			break;

		case '2':
			printf("\n");
			printf("当前信息如下：\n");
			Print(stu1);
			break;

		case '3':
			printf("\n");
			Search(stu1);
			break;

		case '4':
			printf("\n");
			Add(stu1);
			break;

		case '5':
			printf("\n");
			Del(stu1);
			break;

		case '6':
			printf("\n");
			printf("排序最终结果为:\n");
			Sort(stu1);
			break;

		case '0': exit(0);
		default:
			printf("\n");
			printf("你输入了错误的数字\n");
		}
		printf("你还要继续吗\n");
		yn = _getche();
	} while (yn == 'Y' || yn == 'y');

}