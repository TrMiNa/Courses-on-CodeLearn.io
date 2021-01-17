int findMax(stdvectorint arr, int a, int b)
{
    int max=arr[a];
    for(int i=a+1;i=b;i++)
    {
        if(arr[i]max)
            max=arr[i];
    }
    return max;
}
int findMin(stdvectorint arr, int a, int b)
{
    int min=arr[a];
    for(int i=a+1;i=b;i++)
    {
        if(arr[i]min)
            min=arr[i];
    }
    return min;
}

long long calculateMaxMinusMinOfAllSubsequence1(stdvectorint a)
{
    long long u=0, v=0;
    for(int i=0;ia.size();i++)
    {
        for(int j=i;ja.size();j++)
        {
            u+=findMax(a, i, j);
            v+=findMin(a, i, j);
        }
    }
    return u-v;
}