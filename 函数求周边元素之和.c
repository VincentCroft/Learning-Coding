int fun(int a[M][N])
{
    int sum=0;
    int i;
    for (i=0;i<M;i++)
    {
        sum+=a[i][0]+a[i][N-1];
    }
    for (i=0;i<N;i++)
    {
        sum+=a[0][i]+a[M-1][i];
    }
    return sum-a[0][0]-a[M-1][N-1]-a[0][N-1]-a[M-1][0];
}
