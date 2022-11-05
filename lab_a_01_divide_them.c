#include<stdio.h>
int main()
{
    int n, m, i, j, k;
    scanf("%d",&n);
    int roll[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&roll[i]);
    }
    scanf("%d",&k);
    for(i=k+1;i<=n;i++)
    {
        printf("%d ",roll[i]);

    }
    if(k>0)
    {

        for(i=1;i<=k;i++)
        {

            printf("%d ",roll[i]);

        }
    }


    return 0;
}
