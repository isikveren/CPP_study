//完善程序
//程序的功能是：从键盘上输入10个整数，显示去掉其中所有最小值后剩余数据的平均值。
//main函数中定义数据结构，调用其它函数完成工作，并显示结果。
//其中，main主函数调用f1函数完成整数输入及计算总和的工作；调用f2函数完成计算平均值的工作。
#include<stdio.h>
#define N 10
//____①____ f1(int a[], int n)
int f1(int a[], int n)
{
    int i, s=0;
    for(i=0; i<n; i++)
    {
        printf("输入第%d个数字：",i+1);
        scanf("%d",&a[i]);
        s+=a[i];
    }
    return s;
}
float f2(int a[], int n, int s)
{
    int i, min, num;
    min=a[0]; num=1;
    for(i=1; i<n; i++)
        if(min>a[i])
        {min=a[i]; num=1;}  //出现新的最小值，重新记录，并计数。
        else
            if(min==a[i])   //出现重复的最小值
                num++;
    //return (float)(s-min*num)/____②____;
    return (float)(s-min*num)/(n-num);
}
int main()
{
    int a[N], sum;
    float aver;
    sum=f1(a,N);
    //____③____=f2(a,N,sum);
    aver=f2(a,N,sum);
    printf("%.2f\n",aver);
    return 0;
}
