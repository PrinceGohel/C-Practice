#include<stdio.h>

int main()
{
    int abc=0;

    // a for loop row mate 
    for (int i = 1; i <= 5; i++)
    {
        //pela peli and biji column ma 4 no diffrence hase pachi diffrence-- kari ocho thato jase 
        int diffrence = 4 ;
        // ana thi peli column print thai jase 
        printf("%d  ", i);
        abc = i;
    
        //bakini column mate ni for loop
        for (int j = 2; j <= i; j++)
        {
            abc += diffrence;
            printf("%d  " , abc);
            diffrence--;
        }
        printf("\n");
    }
    
    return 0;
}
