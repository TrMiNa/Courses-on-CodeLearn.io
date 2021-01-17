/* ************************************************

    Created by TrMiNa on 12/16/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isLeapYear(int year)
{
	if (year % 400 == 0)
		return true;
	else if (year % 4 == 0 && year % 100 != 0)
		return true;
	else
		return false;
}

int convertDate(int day, int month, int year)
{
	int count1 = 0;
	if (month == 1)
		count1 = day;
	if (month == 2)
		count1 = day + 31;
	if (month == 3)
		count1 = day + 59;
	if (month == 4)
		count1 = day + 90;
	if (month == 5)
		count1 = day + 120;
	if (month == 6)
		count1 = day + 151;
	if (month == 7)
		count1 = day + 181;
	if (month == 8)
		count1 = day + 212;
	if (month == 9)
		count1 = day + 243;
	if (month == 10)
		count1 = day + 273;
	if (month == 11)
		count1 = day + 304;
	if (month == 12)
		count1 = day + 334;

	if (month >= 3 && month <= 12 && isLeapYear(year))
		count1 += 1;

	year--;
	while (year > 0)
	{
		if (isLeapYear(year))
			count1 += 366;
		else
			count1 += 365;
		year--;
	}

	return count1;
}

string date(int d, int m)
{
    string result;
    int d1, d2;
    d1=convertDate(d, m, 2009);
    d2=convertDate(1, 1, 2009);
    int temp = (d1-d2)%7;
    switch(temp)
    {
        case 0:
            result = "Thursday";
            break;
        case 1:
            result = "Friday";
            break;
        case 2:
            result = "Saturday";
            break;
        case 3:
            result = "Sunday";
            break;
        case 4:
            result = "Monday";
            break;
        case 5:
            result = "Tuesday";
            break;
        case 6:
            result = "Wednesday";
            break;
    }
    return result;
}