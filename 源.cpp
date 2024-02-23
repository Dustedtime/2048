#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <graphics.h>
#include <conio.h>

int main()
{
	void zuo(int a[]);
	void shang(int a[]);
	void xia(int a[]);
	void you(int a[]);
	int a[17] = { 0 };
	srand((unsigned)time(NULL));
	int m, n, i, j, k, c, w;
	printf("游戏中按A向左，S向下，W向上，D向右(不区分大小写)\n");
	printf("\n按下回车键开始游戏！\n");
	char ch = getchar();
	initgraph(755, 755);
	setlinecolor(RGB(210, 180, 140));
	setlinestyle(0, 11);
	line(0, 5, 754, 5);
	line(0, 749, 754, 749);
	line(5, 0, 5, 754);
	line(749, 0, 749, 754);
	line(0, 191, 754, 191);
	line(0, 377, 754, 377);
	line(0, 563, 754, 563);
	line(191, 0, 191, 754);
	line(377, 0, 377, 754);
	line(563, 0, 563, 754);
	for (;;)
	{
		for (m = 1, n = 0; m < 17; m++)
		{
			if (a[m] == 2048)
				break;
			if (!a[m])
				n++;
		}
		if (m < 17)
		{
			w = 1;
			break;
		}
		if (!a[0])
		{
			i = rand() % n + 1;
			j = rand() % 2;
			if (j)
				j = 4;
			else
				j = 2;
			for (n = 1, k = 0; n < 17; n++)
			{
				if (!a[n])
					k++;
				if (k == i)
				{
					a[n] = j;
					break;
				}
			}
			for (m = 1; m < 17; m++)
			{
				if (!a[m])
				{
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(128, 128, 128));
					floodfill(x, y, RGB(210, 180, 140));
				}
				else if (a[m] == 2)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(192, 192, 192));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(192, 192, 192));
					settextstyle(75, 75, 0);
					outtextxy(x + 63, y + 50, '2');
				}
				else if (a[m] == 4)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(255, 218, 185));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(255, 218, 185));
					settextstyle(75, 75, 0);
					outtextxy(x + 63, y + 50, '4');
				}
				else if (a[m] == 8)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(244, 164, 96));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(244, 164, 96));
					settextstyle(75, 75, 0);
					outtextxy(x + 63, y + 50, '8');
				}
				else if (a[m] == 16)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(210, 105, 30));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(210, 105, 30));
					settextstyle(75, 75, 0);
					outtextxy(x + 43, y + 50, '1');
					outtextxy(x + 83, y + 50, '6');
				}
				else if (a[m] == 32)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(255, 140, 0));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(255, 140, 0));
					settextstyle(75, 75, 0);
					outtextxy(x + 43, y + 50, '3');
					outtextxy(x + 83, y + 50, '2');
				}
				else if (a[m] == 64)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(255, 69, 0));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(255, 69, 0));
					settextstyle(75, 75, 0);
					outtextxy(x + 43, y + 50, '6');
					outtextxy(x + 83, y + 50, '4');
				}
				else if (a[m] == 128)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(240, 128, 128));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(240, 128, 128));
					settextstyle(75, 75, 0);
					outtextxy(x + 23, y + 50, '1');
					outtextxy(x + 63, y + 50, '2');
					outtextxy(x + 103, y + 50, '8');
				}
				else if (a[m] == 256)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(255, 0, 255));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(255, 0, 255));
					settextstyle(75, 75, 0);
					outtextxy(x + 23, y + 50, '2');
					outtextxy(x + 63, y + 50, '5');
					outtextxy(x + 103, y + 50, '6');
				}
				else if (a[m] == 512)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(0, 255, 255));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(0, 255, 255));
					settextstyle(75, 75, 0);
					outtextxy(x + 23, y + 50, '5');
					outtextxy(x + 63, y + 50, '1');
					outtextxy(x + 103, y + 50, '2');
				}
				else if (a[m] == 1024)
				{
					settextcolor(BLACK);
					int x = (m - 1) % 4;
					int y = (m - 1) / 4;
					x = 11 + x * 186;
					y = 11 + y * 186;
					setfillcolor(RGB(255, 215, 0));
					floodfill(x, y, RGB(210, 180, 140));
					setbkcolor(RGB(255, 215, 0));
					settextstyle(75, 75, 0);
					outtextxy(x + 3, y + 50, '1');
					outtextxy(x + 43, y + 50, '0');
					outtextxy(x + 83, y + 50, '2');
					outtextxy(x + 123, y + 50, '4');
				}
			}
		}
		a[0] = 0;
		for (m = 1, n = 0; m < 17; m++)
			if (!a[m])
				n++;
		if (!n)
		{
			i = 0;
			for (m = 1; m < 16;)
			{
				if (a[m] == a[m + 1])
					i++;
				m++;
				if (m % 4 == 0)
					m++;
			}
			for (m = 1; m < 16;)
			{
				if (a[m] == a[m + 4])
					i++;
				m += 4;
				if (m > 12 && m != 16)
					m -= 11;
				else if (m == 16)
					break;
			}
			if (!i)
			{
				w = 0;
				break;
			}
		}
		for (;;)
		{
			ch = _getch();
			if (ch == 'a' || ch == 'A' || ch == 'w' || ch == 'W')
				break;
			else if (ch == 's' || ch == 'S' || ch == 'd' || ch == 'D')
				break;
			else
			{
				continue;
			}
		}
		if (ch == 'A' || ch == 'a')
			zuo(a);
		else if (ch == 'W' || ch == 'w')
			shang(a);
		else if (ch == 'S' || ch == 's')
			xia(a);
		else
			you(a);
	}
	if (w)
	{
		setlinecolor(BLUE);
		setlinestyle(0 | PS_ENDCAP_FLAT | PS_JOIN_ROUND, 15);
		setfillcolor(CYAN);
		fillroundrect(25, 125, 729, 600, 50, 50);
		settextcolor(YELLOW);
		settextstyle(100, 100, 0);
		setbkcolor(CYAN);
		outtextxy(225, 300, 'W');
		outtextxy(325, 300, 'I');
		outtextxy(375, 300, 'N');
		outtextxy(475, 300, '!');
		ch = getchar();
	}
	else
	{
		setlinecolor(BLUE);
		setlinestyle(0 | PS_ENDCAP_FLAT | PS_JOIN_ROUND, 15);
		setfillcolor(CYAN);
		fillroundrect(25, 125, 729, 600, 50, 50);
		settextcolor(YELLOW);
		settextstyle(100, 100, 0);
		setbkcolor(CYAN);
		outtextxy(225, 300, 'L');
		outtextxy(280, 300, 'O');
		outtextxy(355, 300, 'S');
		outtextxy(425, 300, 'E');
		outtextxy(500, 300, '!');
		ch = getchar();
	}
	closegraph;
	return 0;
}

void zuo(int a[17])
{
	int m, n, i, j, k;
	for (m = k = 0; m < 4; m++)
	{
		n = i = 4 * m + 1;
		j = 4 * (m + 1);
		for (; n <= j;)
		{
			if (a[n])
			{
				while (n > i)
				{
					if (!a[n - 1])
					{
						a[n - 1] = a[n];
						a[n] = 0;
						n--;
						k++;
						continue;
					}
					else
					{
						if (a[n - 1] == a[n])
						{
							a[n - 1] *= 2;
							a[n] = 0;
							n--;
							k++;
							continue;
						}
						else
							break;
					}
				}
			}
			n++;
		}
	}
	if (!k)
		a[0] = 1;
	return;
}
void shang(int a[17])
{
	int m, n, i, j, k;
	for (m = k = 0; m < 4; m++)
	{
		n = i = m + 1;
		j = m + 13;
		for (; n <= j; n += 4)
		{
			if (a[n])
			{
				while (n > i)
				{
					if (!a[n - 4])
					{
						a[n - 4] = a[n];
						a[n] = 0;
						n -= 4;
						k++;
						continue;
					}
					else
					{
						if (a[n - 4] == a[n])
						{
							a[n - 4] *= 2;
							a[n] = 0;
							n -= 4;
							k++;
							continue;
						}
						else
							break;
					}
				}
			}
		}
	}
	if (!k)
		a[0] = 1;
	return;
}
void xia(int a[17])
{
	int m, n, i, j, k;
	for (m = k = 0; m < 4; m++)
	{
		n = i = m + 13;
		j = m + 1;
		for (; n >= j; n -= 4)
		{
			if (a[n])
			{
				while (n < i)
				{
					if (!a[n + 4])
					{
						a[n + 4] = a[n];
						a[n] = 0;
						n += 4;
						k++;
						continue;
					}
					else
					{
						if (a[n + 4] == a[n])
						{
							a[n + 4] *= 2;
							a[n] = 0;
							n += 4;
							k++;
							continue;
						}
						else
							break;
					}
				}
			}
		}
	}
	if (!k)
		a[0] = 1;
	return;
}
void you(int a[17])
{
	int m, n, i, j, k;
	for (m = k = 0; m < 4; m++)
	{
		n = i = 4 * m + 4;
		j = 4 * m + 1;
		for (; n >= j;)
		{
			if (a[n])
			{
				while (n < i)
				{
					if (!a[n + 1])
					{
						a[n + 1] = a[n];
						a[n] = 0;
						n++;
						k++;
						continue;
					}
					else
					{
						if (a[n + 1] == a[n])
						{
							a[n + 1] *= 2;
							a[n] = 0;
							n++;
							k++;
							continue;
						}
						else
							break;
					}
				}
			}
			n--;
		}
	}
	if (!k)
		a[0] = 1;
	return;
}