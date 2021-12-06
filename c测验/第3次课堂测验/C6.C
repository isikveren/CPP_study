/*
����fun�Ĺ����ǽ��β�str��ָ�ַ����������ַ�����ǰ����
���ֵĴ����������ƴ�ӳ�һ�����������������������
���β�str��ָ�ַ�����û�����֣���������ֵΪ0��
���磺��str��ָ�ַ���������Ϊ"C3Xyz9D1",��������ֵΪ391���������391��
*/

 #include <stdio.h>
 //#include <conio.h>
 int fun(char *str) 
 {  
     char *p;
     int x=0;
     for(p=str; *p; p++)
     {
         if(*p>='0'&&*p<='9') 
             x=x*10+*p-48;
     }
     return x;
 }

 int main()
 {
     char str[]="C3Xyz9D1";
     int x;
     x=fun(str);
     printf("%d\n",x);
    // getch();
     return 0;
 }
