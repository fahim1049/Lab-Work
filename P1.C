#include <stdio.h>

int main()
{
    int num[10],sum = 0;
    double average;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
        sum += num[i];
    }

    printf("Sum : %d\n",sum);

    average = sum/10.0;

    printf("\n Ten digit total number average: %.2lf",average);


    return 0
