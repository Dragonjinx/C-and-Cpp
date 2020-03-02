#include <stdio.h>

void total_time(int mins[], int secs[], int n, int *sum_min, int *sum_sec)
{
    *sum_min = 0;
    *sum_sec = 0;

    for(int i =0; i < n; i++)
    {
        *sum_min += mins[i];
        *sum_sec += secs[i];
        if(*sum_sec > 59)
        {
            *sum_min += 1;
            *sum_sec -= 60;
        }
    }
}

int main()
{
    int sum_min;
    int sum_sec;

    int mins[] = {1, 2};
    int secs[] = {53, 8};

    total_time(mins, secs, 2, &sum_min, &sum_sec);
    printf("Total time is %d mins %d seconds\n", sum_min, sum_sec);
    return 0;
}