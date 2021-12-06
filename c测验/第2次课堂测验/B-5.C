
 #include<stdio.h>
 #include<conio.h>
 #define N 5
 int main()
 {
     int m, i, a[N]={0};
     int x=91526, s;
     m=1;
     for(i=1; i<N; i++)
         m*=10;
     for(i=0; i<N; i++)
     {
         a[i]=x/m; x%=m; m/=10;
         printf("%d",a[i]);
     }
     s=0;
     for(i=0; i<N; i++)
         if(a[i]%2)
             s+=a[i];
     printf("%d\n",s);
     getch();
     return 0;
 }


//9152615
