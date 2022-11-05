#include<stdio.h>
int main()
{
    int s, a, b, c, t, i;
    int missing_number, sum_of_three;

    //printf("Number of test cases: \n");
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&s,&a,&b,&c);
        printf("%d %d %d %d\n",s,a,b,c);

        sum_of_three = a+b+c;
        missing_number = s - sum_of_three;
        printf("%d\n",missing_number);
    }


    return 0;
}
