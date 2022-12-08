double fun(double c[10])
{
    double a,b,s=0.0;
    for (int i = 0; i < 10;)
    {
        a = c[i];
        a+=c[++i];
        a/=2;
        b=sqrt(a);//求平方根
        s=s+b;
    }
    printf("%lf\n", s);
    return s;
}

