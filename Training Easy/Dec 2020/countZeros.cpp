int countZeroDigit(int a, int b)
{
    int count=0;

    for(int i=a;i<=b;i++)
    {
        int temp=i;
        while(temp)
        {
            if(temp%10==0)
                count++;
            temp/=10;
        }
    }

    return count;
}