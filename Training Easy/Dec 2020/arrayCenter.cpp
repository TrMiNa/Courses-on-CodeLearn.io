double average(std::vector<int> a)
{
    int result=0;
    for(int i=0;i<a.size();i++)
        result += a[i];
    return result/double(a.size());
}
int findMin(std::vector<int> a)
{
    int min=a[0];
    for(int i=1;i<a.size();i++)
    {
        if(a[i]<min) min=a[i];
    }
    return min;
}
std::vector<int> arrayCenter(std::vector<int> a)
{
    double avg = average(a);
    int min=findMin(a);
    std::vector<int> b;
    for(int i=0;i<a.size();i++)
    {
        if((fabs(a[i]-avg))<min)
            b.push_back(a[i]);
    }
    return b;
}