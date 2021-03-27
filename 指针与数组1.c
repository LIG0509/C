#include<stdio.h>
int main()
{
	void search(float(*p)[4], int n);
	float score[3][4];
	int m, s;
	float *p;
	p = &score[0][0];
	for ( m = 0; m < 3; m++)
	{
		for (s = 0; s < 4; s++)
		{
			scanf_s("%f",&score[m][s]);
                        //可不可以用指针来输入？
		}
	}
	search(score, 3);
	return 0;
}
void search(float(*p)[4], int n)
{
	int i, j, flag;
	for (j= 0; j < n; j++)
	{
		flag = 0;
		for (i = 0; i < 4; i++)
			if (*(*(p + j) + i) < 60) flag = 1;
		if (flag == 1)
		{
			printf("No.%d fails,his scores are:\n", j + 1);
			for (i = 0; i < 4; i++)
			{
				printf("%5.lf", *(*(p + j) + i));
			}
			printf("\n");
		}
	}
}
