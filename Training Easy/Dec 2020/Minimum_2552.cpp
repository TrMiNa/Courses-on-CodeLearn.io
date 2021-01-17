long long minimumNumber(long long num)
{
    string str=to_string(num);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='5')
        {
            str[i]='2';
            break;
        }
    }
    long long result=stol(str);
    return result;
}