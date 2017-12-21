#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e;
    clrscr();
    scanf("%d%d%d",&a,&b,&c);
    d=a>b?a:b;
    e=d>c?d:c;
    printf("%d",e);
}
