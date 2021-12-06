 //C2.HÎÄ¼şÄÚÈİ
 typedef struct test
 {
     char c[10];
     int array[M], s;
     float a;
 }Test;
 void fun1(Test *a, int n)
 {
     Test *p;
     for(p=a; p<a+n; p++)
         f2(p->c);
 }
 void fun2(Test *a, int n, int m)
 {
     Test *p;
     for(p=a; p<a+n; p++)
     {
         p->s=f1(p->array,m);
         p->a=(float)p->s/n;
     }
 }
 int fun3(Test *a, int n, int x)
 {
     int i, num=0;
     for(i=0; i<n; i++)
         if(a[i].a>x)
             num++;
     return num;
 }
 int fun4(Test *a, int n, int x)
 {
     int num=0;
     Test *p;
     for(p=a; p<a+n; p++)
         if(f3(p->c)>x)
             num++;
     return num;
 }