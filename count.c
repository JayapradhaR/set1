#include <stdio.h>
#include<conio.h>
void main()
{
    long long num;
    int count = 0;
    clrscr();
    scanf("%lld", &num);
    while(num != 0)
    {
        num/=10;
        ++count;
    }
    printf("%d",count);
}
