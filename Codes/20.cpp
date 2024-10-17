#include <stdio.h>

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
    int a=read();
    char chh = ch;
    int b=read();
    if(chh == '+') printf("%d%c%d=%d\n", a, chh, b, a+b);
    else if(chh == '-') printf("%d%c%d=%d\n", a, chh, b, a-b);
    else if(chh == '/') printf("%d%c%d=%d\n", a, chh, b, a/b);
    else if(chh == '%') printf("%d%c%d=%d\n", a, chh, b, a%b);
    else if(chh == '*') printf("%d%c%d=%d\n", a, chh, b, a*b);
    return 0;
}
