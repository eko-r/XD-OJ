#include<stdio.h>

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
	int m = read();
	if(m < 60) printf("E\n");
	else if(m < 70) printf("D\n");
	else if(m < 80) printf("C\n");
	else if(m < 90) printf("B\n");
	else printf("A\n");
	return 0;
}

