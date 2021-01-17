string divisibleBySenven(int n, int m)
{
    string temp="", result="";
    for(int i=n;i<=m;i++)
    {
        if(i%7==0&&i%5!=0)
        {
            temp=to_string(i);
            result+=temp;
            result+=", ";
        }
    }
    while(result.back()>'9'||result.back()<'0')
        result.pop_back();
    return result;
}