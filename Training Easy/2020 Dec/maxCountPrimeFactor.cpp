/* ************************************************

    Created by TrMiNa on 12/19/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0) return false;
    return true;
}
int countFactor(int n)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if((n%i==0)&&isPrime(i))
        {
            count++;
            while(n%i==0)
                n/=i;
        }
    }
    return count;
}
int maxCountPrimeFactor(std::vector<int> arr)
{
    int max=countFactor(arr[0]);
    int index=0;
    for(int i=1;i<arr.size();i++)
    {
        int temp = countFactor(arr[i]);
        if(temp>max)
        {
            max=temp;
            index=i;
        }
    }
    return arr[index];
}