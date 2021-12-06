/*
  程序功能：为N×N(N值为奇数)二维矩阵赋值并输出结果，具体形式如下：
  若N=5，则最终结果为：
                         1  0  0  0  2
                         0  3  0  4  0
                         0  0  5  0  0
                         0  4  0  3  0
                         2  0  0  0  1
*/
#include<stdio.h>
#include<conio.h>
#define N 5
int main()
{
    int a[N][N];
    int i, j, s;
    s=1;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==j||i+j==N-1)
                if(i<=N/2)
                {
                    a[i][j]=s++;
                   if(i==N/2)
                       s--;
                }
                else
                    a[i][j]=--s;
            else
                a[i][j]=0;
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
