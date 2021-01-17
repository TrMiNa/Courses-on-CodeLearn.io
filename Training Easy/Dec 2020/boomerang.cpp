int boomerang(std::vector<int> arr)
{
    int count=0;
    for(int i=0;i<arr.size()-2;i++)
    {
        if(arr[i]==arr[i+2]&&arr[i]!=arr[i+1])
            count++;
    }
    return count;
}