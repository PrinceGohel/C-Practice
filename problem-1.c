/*
# The longest increasing stretch
Given an array of integers, determine the length of the longest contiguous stretch in which every element is strictly greater than the previous element
#   example : 
        8
        3 5 7 2 4 6 8 1 
    output : 
        4
    explaination : 2 > 4 > 6 > 8 e longer strach che 3 > 5 > 7 karta
*/

#include<stdio.h>

int takeinput(int size, int num[]);
int checkforlogic(int size, int num[]);

int main()
{
    int size=8; 
    int num[size], res=0;

    //input leva mate nu function
    takeinput(size, num);

    // input ne check karva , return ma intiger value api dese
    res = checkforlogic(size, num);
    printf("res = %d ", res);
    return 0;
}

int takeinput(int size, int num[]){

    for (int i = 0; i < size; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }

}

int checkforlogic(int size,int num[]){

    int scount = 0;
    int longest_s = 0;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < num[i+1])
        {
            scount++;
        }else if(num[i] > num[i+1]){
            if (scount > longest_s)
            {
                longest_s = scount;
            }
            
            scount = 0;
        }
    }
    return longest_s;
}