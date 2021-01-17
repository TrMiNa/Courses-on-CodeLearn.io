/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
int searchElement(std::vector<int> a, int n)
{
    int temp, len = a.size();
    //Sorting from biggest to smallest
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(len<n||n<=0)
        return -1;
    temp=1;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            temp++;
            if(temp==n+1)
                return a[i];
        }
    }
    return -1;
}