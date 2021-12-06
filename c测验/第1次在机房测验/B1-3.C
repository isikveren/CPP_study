//从键盘上输入N个整数，计算所有整数的累加和、平均值，找出其中的最大/小值，统计其中能被3整除的数字的数量，显示所有结果。
#include<stdio.h>
#include<conio.h>
#define N 10  //假定N值
int main()
{
    int x;       //用于键盘输入
    int sum;     //用于保存累加和
    int max;     //用于保存最大值
    int min;     //用于保存最小值
    int num;     //用于保存能被3整除的数字的数量
    int i;       //用于控制循环次数
    float aver;  //用于保存平均值

    num=0;       //赋初值
    sum=0;
    max=0;       //由于确定数字的范围，因此保存最大/小值的变量可以事先赋此数据值。
    min=100;     //若不确定数字的范围，则应该：max=-2147483648; min=2147483647;

    for(i=1; i<=N; i++)
    {
        printf("输入第%2d个数字：",i);
        scanf("%d",&x);
        sum+=x;
        if(max<x)
            max=x;
        if(min>x)
            min=x;
        if(x%3==0)
            num++;
    }
    aver=(float)sum/N;

    printf("输入了%d个数字！\n",N);
    printf("累加和是：%d\n",sum);
    printf("平均值是：%.2f\n",aver);
    printf("最大值是：%d\n",max);
    printf("最小值是：%d\n",min);
    if(num)
        printf("能被3整除的数字的数量是：%d\n",num);
    else
        printf("没有输入能被3整除的数字！\n");
    getch();
    return 0;
}
/*
思考题：
1、如何将上述所有的统计、计算活动“拆开”进行？
2、如何统计最大/小值数字出现的次数？
3、若键盘输入的是非法信息，比如是字符，那程序又当如何？
4、此程序包括的算法：计算总和、平均值、找最大/小值、有条件计数。
*/
