#include<stdio.h>
int main()
{
    int n, m=0, i, dfr=0;

    scanf("%d",&n);
    int ara[n];
//    if(n>0 && n<101)
//    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&ara[i]);
//            if(ara[i]<0 || ara[i]>100)
//            {
//                break;
//            }
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]<0 || ara[i]>100)
            {

                  break;
            }
            else
            {
                m=ara[1];
        for(i=1;i<n+1;i++)
        {
              if(ara[i]>=m)
                {
                    m=ara[i];
                }

                //printf("stop.........................");


        }
        //printf("%d .........%d\n",i,m);
    //}
//    else if(n<0 || n>100)
//    {
//        printf("");
//    }
    for(i=1;i<n+1;i++)
        {


            dfr = m-ara[i];
            ara[i]=dfr;
            printf("%d ",ara[i]);

        }
            }
        }
//            if(ara[i]<0 || ara[i]>100)
//            {
//                //printf("warning..................\n%d",ara[i]);
//                break;
//            }
//        }

//        for(i=1;i<=n;i++)
//            {
//                printf("%d ",ara[i]);
//            }

    return 0;
}
