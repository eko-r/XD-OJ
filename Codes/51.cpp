#include <stdio.h>

inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}


int main()
{
	int a;
	int b = read();
	for (int i = 1; i < 4; i++)
	{
		a = read();
		if(a > b) b = a;
	}
	printf("%d\n", b);
	return 0;
}
