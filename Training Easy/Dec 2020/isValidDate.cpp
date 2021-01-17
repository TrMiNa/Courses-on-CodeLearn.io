	bool isLeapYear(int y)
{
    if(y%400==0||(y%4==0&&y%100!=0)) return true;
    return false;
}

bool isValidDate(int d, int m, int y)
{
    switch(m)
    {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12:
            if(d>=1&&d<=31)
                return true;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            if(d>=1&&d<=30) return true;
            break;

        case 2:
            if(isLeapYear(y)&&d>=1&&d<=29)
                return true;
            if(isLeapYear(y)&&d>=1&&d<=28)
                return true;
            break;
        default:
            return false;
    }
    return false;
}