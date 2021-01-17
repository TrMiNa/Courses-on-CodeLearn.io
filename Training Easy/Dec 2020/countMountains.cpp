int countMountains(std::vector<int> A)
{
    int count=0;
    for(int i=1;i<A.size()-1;i++)
    {
        if(A[i]>A[i+1]&&A[i]>A[i-1])
            count++;
    }
    return count;
}