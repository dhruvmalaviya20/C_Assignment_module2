#include <stdio.h>
int main()
{
	int days,years;
	printf("enter the days: ");
	scanf("%d",&days);
	years=(days/365);
	printf("years: %d \n",years);
	printf("enter the years: ");
	scanf("%d",&years);
	days=(years*365);
	printf("days: %d",days);
	return 0;
}
