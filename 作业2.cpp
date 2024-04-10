#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int maxsum(int nums[], int n)
{
    int i = 0, sum = 0, maxsum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + nums[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum > maxsum)
        {
            maxsum = sum;
        }
    }
    return maxsum;
}
int main()
{
    int n = 0, num = 0;
    int nums[1000];
#pragma warning(suppress : 4996)
    while (scanf("%d", &num) != EOF)
    {
        nums[n] = num;
        n++;
        if (getchar() == '\n')
        {
            break;
        }
    }
    cout << maxsum(nums, n);
    system("pause");
    return 0;
}