/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isDistinctDigits(int n)
{
    string temp=to_string(n);
    for(int i=0;i<temp.length()-1;i++)
    {
        for(int j=i+1;j<temp.length();j++)
        {
            if(temp[i]==temp[j]) return false;
        }
    }
    return true;
}

int distinctDigits(int l, int r)
{
    for(int i=l;i<=r;i++)
    {
        if(isDistinctDigits(i))
            return i;
    }
    return -1;
}