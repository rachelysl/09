#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int i;
    int score[SIZE];
    int sum=0;

    printf("input the score for 5 people\n");

    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&score[i]);
        sum+=score[i];
    }

    printf("average of score:%d\n",sum/SIZE);

    return 0;
}