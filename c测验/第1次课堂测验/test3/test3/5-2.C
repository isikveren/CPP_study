// 教材5.16
// 输出图形
// i:行数;j:空格数;k:*数

 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i, j, k;
     for(i=1; i<=4; i++)           //i:行数
     {
         for(j=1; j<10-i; j++)     //j:空格数量
             printf(" ");          //8,7,6,...
         for(k=1; k<=2*i-1; k++)   //k:*的数量
             printf("*");          //1,3,5...
         printf("\n");
     }
     for(i=3;i>=1;i--)
     {
         for(j=1;j<=9-i; j++)      //j:空格数量
             printf(" ");
         for(k=2*i-1; k>=1;k--)	   //k:*的数量
             printf("*");
         printf("\n");
     }
     getch();
     return 0;
 }

/*
	    *
	   ***
	  *****
	 *******
	  *****
	   ***
	    *
*/