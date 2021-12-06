
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
      int a[]={2,1,0,2,1,0};
      char c[10];
      int i;
      for(i=0; i<6; i++)
          if(i%2)
              c[i]=a[i]+65;
          else
              c[i]=a[i]+97;
      c[i]='\0';
      printf("\"%s\"\n",c);
      getch();
      return 0;
  }


//"cBaCbA"
