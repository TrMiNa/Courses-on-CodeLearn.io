/* ************************************************

    Created by TrMiNa on 12/29/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string genderDetermination(string S)
{
    std::vector<int> dayOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayStr, monthStr;
    int day, month;
    string result = "";

    //Get the day and month from the given string
    dayStr+=S[0];
    dayStr+=S[1];
    day=stoi(dayStr);
    monthStr+=S[3];
    monthStr+=S[4];
    month=stoi(monthStr);
    
    //Checking the gender
    if(month%2==1)
    {
        if((day>=1&&day<=10)||(day>=20&&day<=dayOfMonth[month-1]))
            result = "Trống";
    }
    else
    {
        if(day>=10&&day<=25)
            result = "Mái";
    }
    return result;
}