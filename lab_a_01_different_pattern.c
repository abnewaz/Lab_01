#include<stdio.h>
int main()
{
    int n, i, j=1;

    scanf("%d",&n);

    if(n>0 && n<=20)
    {
        for(i=1;i<=n;i++)
        {
            //printf("%d ",i);
            for(j=i;j>0;j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
    }



    return 0;
}
