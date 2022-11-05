#include<stdio.h>
int main()
{
    int i, j, m, t;
    long long int n;
    int status;
    scanf("%d",&t);
    int ara[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<t;i++)
    {
        if(ara[i]>=2)
            {
                status=0;
                m=sqrt(ara[i]);
                for(j=2;j<=m;j++)
                {
                    if(ara[i]%j==0)
                        {
                            status=1;
                            break;
                        }
                }

                if(status==0)
                {
                    printf("Yes\n");
                }
                else
                    printf("No\n");
            }
            else
            {
                printf("No\n");
            }
    }
    return 0;
}
