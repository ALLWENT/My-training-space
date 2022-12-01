#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int a,b,c;
    while (a < 3)
    {
     for (c = 0; c <= 60; c++)
      {
        if (c == 60)
        {
            c = 0;b++;                                 /* 当秒数 c = 60，分钟 b + 1 */
        }
        if (b == 60)
        {
            b = 0;a++;                                  /* 当分钟 c = 60，小时 a + 1 */
            while (a == 3)
            {
                printf("Time is over GAME OVER");      /* 倒计时结束 */
            }
                return 0;
            
        }
        system("cls");
        printf("%02d:%02d:%02d\n",a,b,c);
        Sleep(1000);                                    /*先清屏，然后打印，随后休眠等待*/
        
      } 
    }
}