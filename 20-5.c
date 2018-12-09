#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
	int num, cnum;
	int cnt=0, vcnt=0, mcnt=0;

	while (1)
	{
		printf("바위는 1, 가위는 2, 보는 3: ");
		scanf("%d", &num);

		srand((int)time(NULL));
		cnum = rand() % 3 + 1;

		if (num == 1)
			printf("당신은 바위를 선택, ");
		else if (num == 2)
			printf("당신은 가위를 선택, ");
		else
			printf("당신은 보를 선택, ");

		if (cnum == 1)
			printf("컴퓨터는 바위 선택, ");
		else if (cnum == 2)
			printf("컴퓨터는 가위 선택, ");
		else
			printf("컴퓨터는 보 선택, ");

		if (num == cnum)
		{
			printf("비겼습니다! \n");
			mcnt++;
		}
		else if (num == 3 && cnum == 1)
		{
			printf("당신이 이겼습니다! \n");
			vcnt++;
		}
		else if (num == 1 && cnum == 3)
		{
			printf("당신이 졌습니다! \n");
			break;
		}
		else if (num < cnum)
		{
			printf("당신이 이겼습니다! \n");
			vcnt++;
		}
		else
		{
			printf("당신이 졌습니다! \n");
			break;
		}
	}

	printf("\n게임의 결과: %d승, %d무 \n", vcnt, mcnt);
	return 0;
}
