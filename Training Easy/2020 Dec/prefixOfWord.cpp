/* ************************************************

    Created by TrMiNa on 12/29/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int prefixOfWord(string s, string p)
{
    int j;
    int countWords=1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
            countWords++;
        j=0;
        while(s[i+j]==p[j])
        {
            j++;
            if(j==p.length())
                return countWords;
        }
    }
    return -1;
}