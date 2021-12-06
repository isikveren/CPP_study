
 #include<stdio.h>
 #include<string.h>
 #include<conio.h>
 int main()
 {
     char c[20]="xayxyab", ch[]="xy";
     int i, j, k, flag=1, len;
     len=strlen(ch);
     i=0;
     while(c[i]&&flag)
     {
         j=i; k=0;
         while(ch[k]==c[j])
         {
             if(ch[k+1]=='\0')
             {
                 flag=0;
                 break;
             }
             k++; j++;
         }
         i++;
     }
     k=i-len+1;
     i=k+len; j=strlen(c)+len-1;
     while(j>=i)
     {
         c[j]=c[j-len];
         j--;
     }

     printf("\"%s\"\n",c);
     getch();
     return 0;
 }


//"xayxyxyab"
