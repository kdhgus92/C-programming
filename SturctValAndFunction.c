#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPostion(void)
{
	Point cen;
	printf("Inpout current pos; ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main(void)
{
	Point curPos = GetCurrentPostion();
	ShowPosition(curPos);
	return 0;
}
