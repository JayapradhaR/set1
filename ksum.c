#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],N,K,i,sum=0;
    clrscr();
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
            for(i=0;i<K;i++)
            {
                sum=sum+a[i];
            }
    
    printf("%d",sum);
}

