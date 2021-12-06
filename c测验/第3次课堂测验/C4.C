
 #include<stdio.h>
 //#include<conio.h>
 #define N 5
 #define M 5
 #include"c1.h"
 #include"c2.h"
 int main()
 {
     Test a[N]={{"*a*b*",{1,2,3,4,5},0,0},
                {"#xyz#",{2,3,4,5,6},0,0},
                {"M%N%O%P",{3,4,5,6,7},0,0}, 
                {"A@B@C",{2,4,6,8,10},0,0},
                {"h6ij2k3",{1,3,5,7,9},0,0}};
     int n;
     fun2(a,N,M);
     n=fun3(a,N,5);
     printf("%d\n",n);
   //  getch();
     return 0;
 }

 //1
