int findClosestPair(std::vector<int> numbers, int sum)
{
    int len=numbers.size();
    if(len==0||len==1) return -1;
    int d;
    bool first=true, isExist=false;
    int index1, index2;
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if((numbers[i]+numbers[j])==sum)
            {
                if(first)
                {
                    first=false;
                    d=abs(numbers[i]-numbers[j]);
                    isExist=true;
                    index1=i;
                    index2=j;
                    continue;
                }
                if(abs(numbers[i]-numbers[j])<d)
                {
                    isExist=true;
                    index1=i;
                    index2=j;
                    d = abs(numbers[i]-numbers[j]);
                }
            }
        }
    }
    if(isExist)
        return abs(index1-index2);
    else
        return -1;
}