/*fx mencari fibonansi*/
#include<stdio.h>
int fibonacci(int x, int y,int z);
int main()
{
    int hasil=0;
    int m,n,p;
    printf("Banyak data untuk deret fibonacci : ");scanf("%d",&p);
         hasil=fibonacci(m,n,p);
}

int fibonacci(int x, int y,int z)
{
    int hasil=0;
    int count=1;
    x=0;
    y=1;
    printf(" %d ",y);
    for(count=1;count<=z-1;count++)
    {
         hasil=x+y;
         printf(" %d ",hasil);
         x=y;
         y=hasil;
    }
    return hasil;
}
