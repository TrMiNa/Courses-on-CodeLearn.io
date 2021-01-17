/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPangram(string string)
{
    for(int i=0;i<string.length();i++)
        if(string[i]>='A'&&string[i]<='Z')
            string[i]+=32;
    bool isAppeared[26];
    for(int i=0;i<26;i++)
        isAppeared[i]=false;
    for(int i=0;i<string.length();i++)
    {
        if(string[i]!=' ')
            isAppeared[string[i]-97]=true;
    }
    for(int i=0;i<26;i++)
        if(!isAppeared[i])
            return false;
    return true;
}