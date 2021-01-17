/* ************************************************

    Created by TrMiNa on 01/01/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string explosion(string s)
{
    string result="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            result+=s[i];
    }
    if(result.length()==0)
        return "Failed";
    else
        return result;
}