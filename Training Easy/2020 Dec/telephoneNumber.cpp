/* ************************************************

    Created by TrMiNa on 12/17/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string telephoneNumber(string s)
{
    bool hasEight=false;
    int indexOfEight;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='8')
        {
            hasEight=true;
            indexOfEight=i;
            break;
        }
    }
    if(hasEight&&(s.length()-1-indexOfEight)>=10)
        return "YES";
    return "NO";
}