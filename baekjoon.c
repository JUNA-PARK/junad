#include <stdio.h>

int buger_min(int[]);
int drink_min(int[]);

int main(void)
{
	int buger[3],drink[2];
	int cheap_set = 0;
	
	for(int i = 0;i<3;i++) scanf("%d",&buger[i]);	
	for(int i = 0;i<2;i++) scanf("%d",&drink[i]);
	
	cheap_set = buger_min(buger) + drink_min(drink) - 50;
	
	printf("%d\n",cheap_set);	
	printf("buger_min : %d  drink_min  : %d\n",buger_min(buger), drink_min(drink));
}

int buger_min(int buger[])
{	
	int buger_min = buger[0];
	
	for (int i = 0; i<2;i++)
	{
		(buger_min<buger[i+1]) ? (buger_min = buger_min) : (buger_min = buger[i+1]); 
	}
	
	return buger_min;
}

int drink_min(int drink[])
{
	int drink_min = drink[0];
	
	(drink[0]<drink[1]) ? (drink_min = drink[0]) : (drink_min = drink[1]);
	
	return drink_min;
}