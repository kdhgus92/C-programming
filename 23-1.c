#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point * ppos1, Point * ppos2)
{
	Point temp;
	temp = *ppos1;
	*ppos1 = *ppos2;
	*ppos2 = temp;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };

	SwapPoint(&pos1, &pos2);
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);
	return 0;
}
