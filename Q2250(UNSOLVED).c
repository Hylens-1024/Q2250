#include<stdio.h>
int square = 0;
int count = 0;
int fun(int i)
{
        int r=i;
        while(r != 0)
        {
            r/=10;
            count++;
        }
        square = i*i-i;
        for ( ;count>0;count--)
        {
            square /= 10;
        }
        if (square == i)
        {
            count = 0;
            return 1;
        }
        else
        {
            count = 0;
            return 0;
        }
}
int main()
{
    int n,m;
    printf("请输入两个端点：");
    scanf("%d,%d",&n,&m);
    for( ;n<=m;n++)
    {
        if(fun(n)==1)
            printf("m = %3d\t\tm * m = %6d\n",n,n*n);
    }
    return 0;
}
