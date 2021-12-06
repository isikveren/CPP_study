
  #include<stdio.h>
  #include<conio.h>
  #define N 8
  int main()
  {
      int a[N]={3,1,6,4,7,9,2,5};
      int i, sum;
      for(i=0; i<N-1; i++)
          if(a[i]%2)
              a[i]=a[i+1]+5;
      sum=50;
      for(i=0; i<N; i+=2)
          sum-=a[i];
      printf("%d\n",sum);
      getch();
      return 0;
   }

//22
