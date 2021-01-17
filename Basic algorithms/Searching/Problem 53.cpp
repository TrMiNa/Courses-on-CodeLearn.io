/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
int searchElement02(std::vector<std::vector<int>> a, int k)
{
    vector<int> arr;
    int lenVtc = a.size(), i, j;
    for(i=0;i<lenVtc;i++)
    {
        for(j=0;j<lenVtc;j++)
            arr.push_back(a[i][j]);
    }
    int len=arr.size(), temp;
    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    temp = 1;
    for(i=0;i<len-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            temp++;
            if(temp==k+1)
                return arr[i];
        }
    }
    return -1;
}