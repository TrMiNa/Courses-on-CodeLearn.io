/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string amendTheSentence(string s)
{
    for(int i=0;i<s.length();i++)
    {
        if(i==0&&s[i]>='A'&&s[i]<='Z')
            s[i]+=32;
        else if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;
            s.insert(i, " ");
        }
    }
    return s;
}