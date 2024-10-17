#include <stdio.h>
int main()
{
	char ch = getchar();
	if(65 <= ch && ch <= 90) printf("%c\n", ch + 32);
	else if(97 <= ch && ch <= 122) printf("%c\n", ch - 32);
	else printf("%c\n", ch);
	return 0;
}
