#include<stdio.h>
#include<windows.h>
void power(int,int);

void power(int progres1,int n)
{
    for (int i = 0; i < 10; i++)
    {
        system("cls");
        progres1=progres1+n;
        printf("Task [");
        for (int j = 0; j < progres1; j++)
        {
            printf("=");
        }
        for (int k = 0; k < (100-progres1); k++)
        {
           printf(" ");
        }
        printf("] %d%%" ,progres1);
        Sleep(1000);
    }
    return ;
}
int main()
{
    int num1=10;
    int progress1=0;
    power(progress1, num1);
    int num2=5,progress2=0;
    power(progress2,num2);

    // int progres1=0;
    // for (int i = 0; i < 10; i++)
    // {
    //     system("cls");
    //     progres1=progres1+10;
    //     printf("Task [");
    //     for (int j = 0; j < progres1; j++)
    //     {
    //         printf("=");
    //     }
    //     for (int k = 0; k < (100-progres1); k++)
    //     {
    //        printf(" ");
    //     }
    //     printf("] %d%%" ,progres1);
    //     sleep(1);
    // }
}
