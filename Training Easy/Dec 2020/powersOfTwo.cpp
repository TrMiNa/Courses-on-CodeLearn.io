int powersOfTwo(int k, std::vector<int> arr)
{
    bool appeared=false;
    int power2;
    for(int i=0;i<=k;i++)
    {
        power2=pow(2, i);
        appeared=false;
        for(int j=0;j<arr.size();j++)
        {
            if(arr[j]==power2)
            {
                appeared=true;
                j=arr.size();
            }
        }
        if(!appeared)
            return power2;
    }
}