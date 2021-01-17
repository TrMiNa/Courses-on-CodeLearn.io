/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;

int sumDigitNum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

std::vector<int> digitalSumSort(std::vector<int> a)
{
    vector<int> sumDigitArr;
    for(int i=0;i<a.size();i++)
        sumDigitArr.push_back(sumDigitNum(a[i]));
    for(int i=0;i<sumDigitArr.size()-1;i++)
    {
        for(int j=i+1;j<sumDigitArr.size();j++)
        {
            if(sumDigitArr[i]>sumDigitArr[j])
            {
                int temp=sumDigitArr[i];
                sumDigitArr[i]=sumDigitArr[j];
                sumDigitArr[j]=temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else if(sumDigitArr[i]==sumDigitArr[j])
            {
                if(a[i]>a[j])
                {
                    int temp=sumDigitArr[i];
                    sumDigitArr[i]=sumDigitArr[j];
                    sumDigitArr[j]=temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
    return a;
}  