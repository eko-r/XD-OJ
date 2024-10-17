#include  <stdio.h>


char ch;

inline int read()
{
    int x=0,f=1;
    ch=getchar();
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
	bool f = true;
	int a, b, c;
	a = read();
	b = read();
	if (a > b) a ^= b ^= a ^= b;
	c = read();
	if(c < b)
	{
		c ^= b ^= c ^= b;
		if (a > b) a ^= b ^= a ^= b;
	}
	if(a * a + b * b == c * c) printf("%d\n",a * b);
	else printf("no\n");
}
		


