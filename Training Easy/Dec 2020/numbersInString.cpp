int numbersInString(string st)
{
    int count=0;
    string temp ="";
    for(int i=0;i<st.length();i++)
    {
        if(st[i]>='0'&&st[i]<='9')
            temp.push_back(st[i]);
        else if(temp!="")
        {
            for(int j=0;j<temp.length();j++)
                for(int k=j;k<temp.length();k++)
                    count++;
            temp="";
        }
        if(i==(st.length()-1)&&temp!="")
        {
            for(int j=0;j<temp.length();j++)
                for(int k=j;k<temp.length();k++)
                    count++;
            temp="";
        }
    }
    return count;
}