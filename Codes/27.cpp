#include <stdio.h>
int main()
{
	float t;
	scanf("%f", &t);
	if(t <= 110) printf("%.2f\n", 0.5 * t);
	else if(t <= 210) printf("%.2f\n", 55 + 0.55*(t-110));
	else printf("%.2f\n", 110 + 0.7 * (t - 210));
	return 0;
}
