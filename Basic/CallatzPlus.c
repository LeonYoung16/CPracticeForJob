#include<stdio.h>
#include<stdlib.h>

int main()
{
    int K=0;
    scanf("%d",&K);
    int *num;
    num = (int*)malloc(sizeof(int)*K);

    for(int i=0;i<K;i++)
    {
        scanf("%d", &num[i]);
    }

    for(int i=0; i<K; i++)
    {
        int callatz = num[i];
        if(callatz == 0)
        {
            continue;
        }
        while(callatz != 1)
        {
            if(callatz %2 == 1)
            {
                callatz = (3*callatz+1)/2;
            }else 
            {
                callatz = callatz/2;
            }

            for(int i=0; i<K; i++)
            {
                if(num[i] == callatz)
                {
                    num[i] = 0;
                }
            }
            
        }
    }

    for(int i=0; i<K-1; i++)
    {
        for(int j=0; j<K-i-1; j++)
        {
            if(num[j] < num[j+1])
            {
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(int i=0; i<K; i++)
    {
        if(num[i] != 0)
        {
            if(num[i+1] == 0)
            {
                printf("%d", num[i]);
                break;    
            }
            printf("%d ", num[i]);
        }
    }

    return 0;
}