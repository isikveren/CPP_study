//将数组s中字符串内的字母字符和数字字符分开存放，字母字符在前，数字字符在后。

  #include<stdio.h>
  #include<conio.h>
  int main()
  {
      char s[10]="b3a5k7";
      int i, j, k;
      char t1[80], t2[80];
      j=0; k=0;
      for(i=0; s[i]; i++)
          if(s[i]>='0'&&s[i]<='9')
          {
              t2[j]=s[i];
              j++;
          }
          else
              t1[k++]=s[i];
      t2[j]=0;
      t1[k]=0;
      for(i=0; i<k; i++)
          s[i]=t1[i];
      for(i=0; i<j; i++) 
          s[k+i]=t2[i];
      printf("\"%s\"\n",s);
      getch();
      return 0;
  }
