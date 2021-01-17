int compareSumOfDigits(string input)
{
    int sumEven=0, sumOdd=0;
    for(int i=0;i<input.size();i++)
    {
        int temp = input[i]-48;
        if(temp%2==0)
            sumEven+=temp;
        else
            sumOdd+=temp;
    }
    return sumOdd-sumEven;
}