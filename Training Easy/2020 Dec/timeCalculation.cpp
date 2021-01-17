/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string timeCalculation(int s)
{
    int minutes=0, hours=0;
    string result ="00:00:00";
    string temp;
    
    if(s>=3600)
    {
        hours=s/3600;
        s = s%3600;
        temp=to_string(hours);
        if(hours>=10)
            result.replace(0, 2, temp);
        else
            result.replace(1, 1, temp);
    }

    if(s>=60)
    {
        minutes=s/60;
        s = s%60;
        temp=to_string(minutes);
        if(minutes>=10)
            result.replace(3, 2, temp);
        else
            result.replace(4, 1, temp);
    }

    if(s>=1)
    {
        temp=to_string(s);
        if(s>=10)
            result.replace(6, 2, temp);
        else
            result.replace(7, 1, temp);
    }
    
    return result;
}