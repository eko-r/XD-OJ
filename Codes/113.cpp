#include <stdio.h>
int main()
{
	int t;
	double mile, sum = 0;
	scanf("%lf %d", &mile, &t);
	sum += t/5*2;
	if(mile > 0)
	{
		sum += 10;
		mile -= 3;
	}
	if(mile > 0)
	{
		if (mile <= 7)
			sum += mile * 2;
		else
		{
			sum += 14;
			mile -=7;
			sum += mile * 3;
		}
	}
	printf("%.0lf\n", sum);
	return 0;
}
