string createPhoneNumber(std::vector<int> arr)
{
    string result="(", digit;
    for(int i=0;i<arr.size();i++)
    {
        digit=to_string(arr[i]);
        result+=digit;
        if(i==2) result+=") ";
        if(i==5) result+="-";
    }
    return result;
}