
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
      char c[]="**A#5b&7C%9d@**";
      int i, j;
      int x=0;
      i=0; j=0;
      while(c[i])
      {
          if(c[i]>='0'&&c[i]<='9')
              c[j++]=c[i];
          i++;
      }
      c[j]='\0';
      for(i=0; i<j; i++)
          x=x*10+(c[i]-48);
      printf("%d\n",x);
      getch();
      return 0;
  }


//579