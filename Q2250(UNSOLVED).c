/*Q2250.(语言: C)编写程序，找出区间之间的全部同构数。
要求：自定义一个函数判断一个数是否为同构数。再在主函数调用这个函数求出某个区间的所有同构数。
同构数的定义：若一个数出现在它的平方数的右边则称它是同构数。例如：若5*5=25，则5是一个同构数。再如，若 376*376 = 141376,则376是一个同构数。
**输入提示："请输入两个端点："
**输入格式："%d,%d"
**输出格式要求："m = %3d\t\tm * m = %6d\n"
注：不能使用指针、结构体、共用体、文件、goto、枚举类型进行编程。

程序运行示例：
请输入两个端点：1,25
m =   1		m * m =      1
m =   5		m * m =     25
m =   6		m * m =     36
m =  25		m * m =    625
*/
#include<stdio.h>
int square = 0;
int count = 0;
int fun(int i)
{
        int r=i;
        count = 0;
        while(r != 0)
        {
            r/=10;
            count++;
        }
        square = i*i-i;
        for ( ;count>0;count--)
        {
            if (square % 10 != 0)
            {
                return 0;
            }
            square /= 10;
        }
        return 1;
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
