#include<stdio.h>
int main()
{

    int t, x, i, j, n, m;

    scanf("%d",&t);
    int ara[t];


    for(i=0;i<t;i++)
    {
        scanf("%d%%",&x);
        //printf("%d\n",x);
        if(x>=80)       //3min
        {
            m=100-x;
            ara[i]=m*3;

        }
        else if(x>=60)      //2min
        {
            m=80-x;
            ara[i]=m*2 + 20*3;

        }
        else                //1min
        {
            m=60-x;
            ara[i]=m*1 + 20*2 +20 *3;
        }
    }
    for(i=0;i<t;i++)
        {
        printf("%d minutes\n",ara[i]);
        }




    return 0;
}
