int oddNumbersBeforeZero(std::vector<int> sequence)
{
    int count=0, j=-1;
    for(int i=0;i<sequence.size();i++)
    {
        if(sequence[i]==0)
        {
            j=i;
            break;
        }
    }
    if(j==-1)
        return 0;
    else
    {
        for(int i=0;i<j;i++)
        {
            if(sequence[i]%2==1)
                count++;
        }
        return count;
    }
}