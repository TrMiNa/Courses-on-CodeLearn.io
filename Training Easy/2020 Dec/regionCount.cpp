/* ************************************************

    Created by TrMiNa on 12/16/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int regionCount(string s)
{
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='C'||(s[i]>='E'&&s[i]<='N')||(s[i]>='S'&&s[i]<='Z'))
            count++;
        else if(s[i]=='B')
            count+=3;
        else
            count+=2;

    }
    return count;
}
