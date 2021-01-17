/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string lineEncoding(string s)
{
    string result="";
    for(int i=0;i<s.length();i++)
    {
        int count=1;
        while(s[i]==s[i+1])
        {
            count++;
            i++;
        }
        if(count>1)
        {
            result+=to_string(count);
            result+=s[i];
            count=1;
        }
        else
            result+=s[i];
    }
    return result;
}