#include <stdio.h>
int main()
{
	int y, m;
	int sy[8] = {0, 1, 3, 5, 7, 8, 10, 12};
	int ty[5] = {0, 4, 6, 9, 11};
	scanf("%d%d", &y, &m);
	//bool f = ((y / 4 == 0) && (y / 400 != 0));
	if(m == 2)
		if(y % 4 == 0 && y % 400 != 0) printf("29\n");
		else printf("28\n");
	for(int i = 1; i <= 7; i++)
		if(m == sy[i]) printf("31\n");
	for(int i = 1; i <= 4; i++)
		if(m == ty[i]) printf("30\n");
	return 0;
}
