bool goldRush(std::vector<int> arr)
{
    if(arr.size()==0) return true;
    int idxMax=0, max=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            idxMax=i;
        }
    }
    int j=idxMax;
    while(arr.size()>1)
    {
        if(j<(arr.size()-1)&&arr[j]>arr[j+1])
        {
            arr[j]++;
            arr.erase(arr.begin()+j+1);
        }
        else if(j>0&&arr[j]>arr[j-1])
        {
            arr[j]++;
            arr.erase(arr.begin()+j-1);
            j--;
        }
        else
            return false;
    }
    return true;
}