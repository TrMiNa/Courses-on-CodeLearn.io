/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string truncateString(string s)
{
    int firstDigit, lastDigit;
    while(true)
    {
        if(s.length()==0)
            return s;
        firstDigit = int(s[0]-'0');
        lastDigit = int(s[s.length()-1]-'0');
        if(firstDigit%3==0)
            s.erase(0, 1);
        else if(lastDigit%3==0)
            s.erase(s.length()-1, 1);
        else if((firstDigit+lastDigit)%3==0)
        {
            s.erase(s.length()-1, 1);
            s.erase(0, 1);
        }
        else break;
    }
    return s;
}