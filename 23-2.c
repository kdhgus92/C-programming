#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point pos1;
	Point pos2;
} Rectangle;

int AreaRec(Rectangle rec)
{
	int area;
	area = (rec.pos1.xpos - rec.pos2.xpos)*
		(rec.pos1.xpos - rec.pos2.ypos);
	if (area < 0)
		return -area;
	else
		return area;
}

void ShowRecArea(Rectangle rec)
{
	printf("넓이: %d \n", AreaRec(rec));
}

void ShowRecPos(Rectangle rec)
{
	printf("1좌표: [%d, %d] \n", rec.pos1.xpos, rec.pos1.ypos);
	printf("2좌표: [%d, %d] \n", rec.pos2.xpos, rec.pos2.ypos);
	printf("3좌표: [%d, %d] \n", rec.pos1.xpos, rec.pos2.ypos);
	printf("4좌표: [%d, %d] \n", rec.pos2.xpos, rec.pos1.ypos);
}

int main(void)
{
	int result;
	Rectangle rec1;
	printf("1번 좌표: "); scanf("%d %d", &rec1.pos1.xpos, &rec1.pos1.ypos);
	printf("2번 좌표: "); scanf("%d %d", &rec1.pos2.xpos, &rec1.pos2.ypos);

	ShowRecArea(rec1);
	ShowRecPos(rec1);
	return 0;
}
