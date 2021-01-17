std::vector<int> disappearedNumbers(std::vector<int> a)
{
    bool isAppeared[10000];
    std::vector<int> result;
    for(int i=0;i<a.size();i++)
        isAppeared[i]=false;
    for(int i=0;i<a.size();i++)
    {
        isAppeared[a[i]-1]=true;
    }
    for(int i=0;i<a.size();i++)
    {
        if(!isAppeared[i])
            result.push_back(i+1);
    }
    return result;
}