#include<stdio.h>
#define MapNum 3
#define  W 10
#define H 5
typedef struct
{
	int m_map[H][W];
}Map;
typedef struct
{
	int x, y;
}Pos;

void SetMap(char* filename, Map* m);
void DrawMap(Map m);
void CharaMove(&MapData, &CharaPos);
main()
{
	Map MapData;
	Pos CharaPos = { 1,1 };
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select=0;
	if (select >= 0 && select <= 2)
	{
		SetMap(MapFileName[select], &MapData);
		MapData.m_map[CharaPos.y][CharaPos.x] = 2;
		while
		{
			system("cls");
			DrawMap(MapData);
			CharaMove(&MapData, &CharaPos);
		}
	}
	
}
void CharaMove(Map* m, Pos* m)
	{
		chara ch;
		ch = getch();
		switch (ch)
		{
		case 'd':
			m->m_map[p->y][p->x] = 0;
			m->m_map[p->y][(p->x)+1] = 2;
			p->x += 1;
		}

	}

	
void SetMap(char* filename, Map* m)
{
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r"))
	{
		for (i = 0; i < H; i++)
		{
			for (j = 0; j < W; j++)
			{
				ch = fgetc(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}
void DrawMap(Map m)
{
	int i, j;
	switch (m.m_map[i][j])
	{
	case 0:
		printf(" ");
		break;
	case 1:
		printf("Å°");
		break;
	case 2:
		printf("@");
		break;
	}
}