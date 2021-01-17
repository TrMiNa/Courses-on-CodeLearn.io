int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k)
{
    std::vector<int> temp;
    int realMax=0;
    for(int i=0;i<=inputArray.size()-k;i++)
    {
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum+=inputArray[i+j];
        }
        if(sum>realMax||realMax==0)
            realMax=sum;
    }
    return realMax;
}