int lego(int a, int b, int n)
{
    bool found=false;
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    int i, j;
    for(int i=n/a;i>=1;i--)
    {
        j=(n-a*i)/b;
        if((a*i+b*j)==n)
            return i+j;
    }
    return -1;
}