//从键盘上输入一组整数，以输入-1为结束。计算所有整数的累加和、平均值，找出其中的最大/小值，统计其中能被3整除的数字的数量，显示所有结果。
#include<stdio.h>
#include<conio.h>
int main()
{
    int x;       //用于键盘输入
    int sum;     //用于保存累加和
    int max;     //用于保存最大值
    int min;     //用于保存最小值
    int num;     //用于保存能被3整除的数字的数量
    int n;       //用于保存输入数字的数量
    float aver;  //用于保存平均值
    n=0;
    printf("输入第%2d个数字：",n+1);
    scanf("%d",&x);
    max=x;
    min=x;       //此时输入的第一个数可以认定为是此时的最大/小值。
    num=0;       //赋初值
    sum=0;
    while(x!=-1)
    {
        n++;
        sum+=x;
        if(max<x)
            max=x;
        if(min>x)
            min=x;
        if(x%3==0)
            num++;
        printf("输入第%2d个数字：",n+1);
        scanf("%d",&x);
    }
    if(n)
    {
        aver=(float)sum/n;
        printf("输入了%d个数字！\n",n);
        printf("累加和是：%d\n",sum);
        printf("平均值是：%.2f\n",aver);
        printf("最大值是：%d\n",max);
        printf("最小值是：%d\n",min);
        if(num)
            printf("能被3整除的数字的数量是：%d\n",num);
        else
            printf("没有输入能被3整除的数字！\n");
    }
    else
        printf("没有输入数字！\n");
    getch();
    return 0;
}
/*
1. sum=0
2. num++
3. num
/*
思考题：
1、如何将上述所有的统计、计算活动“拆开”进行？
2、如何统计最大/小值数字出现的次数？
3、若键盘输入的是非法信息，比如是字符，那程序又当如何？
4、此程序包括的算法：计算总和、平均值、找最大/小值、有/无条件计数。
*/
