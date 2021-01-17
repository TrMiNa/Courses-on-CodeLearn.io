/* ************************************************

    Created by TrMiNa on 12/29/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isLeapYear(int y)
{
    if(y%400==0)
        return true;
    if(y%4==0&y%100!=0)
        return true;
    return false;
}
int countOfTimes(int h, int d, int m, string S)
{
    std::vector<int> dayOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Check if the month is correct
    if(m<=0||m>=13) return -1;
    int day = dayOfMonth[m-1], y = stoi(S);
    if(m==2&&isLeapYear(y))
        day++;
    int refuel = day*24/h;
    int maintenance = day/d;
    return refuel+maintenance;    
}