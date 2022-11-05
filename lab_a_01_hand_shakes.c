#include<stdio.h>
int main()
{
    long long int N, i, nomi = 1, denomi = 1, res;
    scanf("%lld", &N);


    //2nC2 =  n!/ (n-2)! * 2!

    for(i = N; i> N-2; i--){
        nomi = nomi * i;
    }

    denomi = 2;
    res = nomi/denomi;
    printf("%lld", res);



    return 0;
}
