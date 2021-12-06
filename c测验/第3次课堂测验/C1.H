
 //C1.HÎÄ¼şÄÚÈİ
 int f1(int *a, int n)
 {
     int i, s=0;
     for(i=0; i<n; i++)
         s+=a[i];
     return s;
 }
 void f2(char *a)
 {
     char *p=a, *q=a;
     while(*p)
     {
         if(*p>='a'&&*p<='z'||*p>='A'&&*p<='Z')
             *q++=*p;
         p++;
     }
     *q='\0';
 }
 int f3(char *a)
 {
     int i=0;
     while(a[i])
         i++;
     return i;
 }
 void f4(char *a, int x)
 {
     char *p=a;
     while(*p)
     {
         if((p-a)%x==0)
             (*p)++;
         p++;
     }
 }
