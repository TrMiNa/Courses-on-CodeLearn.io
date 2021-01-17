/* ************************************************

    Created by TrMiNa on 01/13/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int countSubstring(string s1, string s2)
{
    int len1=s1.length(), len2=s2.length(), count=0;
    if(len1<len2) return false;
    for(int i=0;i<=len1-len2;i++)
    {
        int j=0;
        while(s1[i+j]==s2[j])
        {
            j++;
            if(j==len2)
            {
                count++;
                break;
            }
        }
    }
    return count;
}