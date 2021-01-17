string binToNum(string s)
{
    if(s=="10011111"||s=="01011111") return "0";
    if(s=="00000101") return "1";
    if(s=="01110110") return "2";
    if(s=="01110101") return "3";
    if(s=="00101101") return "4";
    if(s=="01111001") return "5";
    if(s=="01111011") return "6";
    if(s=="01000101") return "7";
    if(s=="01111111") return "8";
    if(s=="01111101") return "9";
}

string electronicScreen(string s)
{
    string tempBin="", tempDigit="", result="";
    int countBin=0;
    for(int i=0;i<s.length();i++)
    {
        countBin++;
        tempBin+=s[i];
        if(countBin==8)
        {
            tempDigit=binToNum(tempBin);
            result+=tempDigit;
            tempBin.clear();
            tempDigit.clear();
            countBin=0;
        }
    }
    return result;
}