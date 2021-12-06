/*
����fun�Ĺ������ҳ�N*N������ÿ��Ԫ�ص����ֵ��������˳������
�β�b��ָ�������С�
*/

#include <stdio.h>
//#include<conio.h>
#define N 4
void fun(int *a[], int *b, int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        b[i] = a[0][i];
        for (j = 1; j < n; j++)
            if (b[i] < a[j][i])
                b[i] = a[j][i];
    }
}
void f(int (*a)[N], int *b[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        b[i] = a[i];
}
int main()
{
    int x[N][N] = {{2, 5, 8, 7},
                   {6, 1, 9, 3},
                   {1, 2, 3, 4},
                   {2, 8, 4, 3}};
    int *p_x[N], y[N], i;
    f(x, p_x, N);
    fun(p_x, y, N);
    printf("�����");
    for (i = 0; i < N; i++)
        printf("%3d", y[i]);
    printf("\n");
    // getch();
    return 0;
}
