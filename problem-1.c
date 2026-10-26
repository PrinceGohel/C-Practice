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

void takeinput(int size, int num[]);

int checkforlogic(int size, int num[]);

int main()
{
    int size;

    printf("Enter The size of The Array : ");
    scanf("%d", &size);
    
    int num[size], res=0;

    //input leva mate nu function
    takeinput(size, num);

    // input ne check karva , return ma intiger value api dese
    res = checkforlogic(size, num);

    printf("res = %d\n", res);

    return 0;
}

void takeinput(int size, int num[]){

    for (int i = 0; i < size; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &num[i]);
    }

}

int checkforlogic(int size, int num[]){

    int s_count = 1, longest_s = 1;

    for (int i = 0; i < (size); i++)
    {
        if (num[i] < num[i+1])
        {
            s_count++;
        }else
        {
            if (s_count > longest_s)
            {
                longest_s = s_count;
            }
            s_count = 1;
        }
    }
    return longest_s;
}
