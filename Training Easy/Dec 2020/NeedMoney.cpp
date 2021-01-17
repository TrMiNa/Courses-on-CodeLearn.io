int needMoney(int t, int s, int p)
{
    double money=s, need=t;
    double rate = p/100.0;
    int year=0;
    while(money<need)
    {
        money*=(rate+1);
        year++;
    }
    return year;
}