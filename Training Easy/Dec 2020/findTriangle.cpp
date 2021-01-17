int findTriangle(std::vector<int> arr)
{
    int hyp, a, b, temp;
    hyp=arr[0];
    a=arr[1];
    b=arr[2];
    if(a<=0||b<=0||hyp<=0)
        return -1;
    if(hyp<a)
    {
        temp=a;
        a=hyp;
        hyp=temp;
    }
    if(hyp<b)
    {
        temp=b;
        b=hyp;
        hyp=temp;
    }
    if((hyp*hyp)==(a*a+b*b))
        return hyp;
    return -1;
}