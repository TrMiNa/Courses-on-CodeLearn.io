int arrayChange(std::vector<int> a)
{
    int count=0;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<=a[i-1])
        {
            count = count +(a[i-1]-a[i]+1);
            a[i] = a[i-1]+1;
        }
    }
    return count;
}