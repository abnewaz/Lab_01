#include<stdio.h>
int main()
{
    int n=0, k=0, i, a, b, run, count=0;
    scanf("%d%d",&n,&k);
    int ara[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
//    for(i=1;i<=n;i++)
//    {
//        printf("%d = %d\n",i,ara[i]);
//    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]<k)
        {
            //printf("%d ",ara[i]);
            count++;
        }

    }

        //printf("\n",count);
        printf("%d",count);


    return 0;
}
