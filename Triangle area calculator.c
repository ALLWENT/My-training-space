#include<stdio.h>
#include<math.h>
#include<windows.h>

int main()
{
    float a,b,c,p,area;

   for(;;)
    { 
      printf("请输入第一条三角形边长\n");
      scanf("%f",&a);
      printf("请输入第一条三角形边长\n");
      scanf("%f",&b);
      printf("请输入第一条三角形边长\n");
      scanf("%f",&c);
      if (a < b + c && b < a + c && c < a + b)
      { 
        p=0.5*(a + b + c);
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("a=%f\nb=%f\nc=%f\nS=%f\n",a,b,c,area);  
        Sleep(1000);
        system("cls");
      }
      else
         {        
         printf("该三角形不存在，请从新输入！\n");
         Sleep(1000);
         
         continue;
         }
    }
}