// 循环嵌套举例
// 输出图形
// i:行数;j:空格数;k:*数

 #define M 5                        //行数
 #define N 10                       //起始位置
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int i, j, k;
     for(i=1; i<=M; i++)           //i:行数
     {
         for(j=1; j<N-i; j++)      //j:空格数量
             printf(" ");
         for(k=1; k<=2*i-1; k++)   //k:*的数量
             printf("*");          //1,3,5...
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
	*********
*/
/*
	  *****
	 *******
	*********

	    *
	   ***
	  *****
	 *******

	*********
	 *******
	  *****
	   ***
	    *
*/















