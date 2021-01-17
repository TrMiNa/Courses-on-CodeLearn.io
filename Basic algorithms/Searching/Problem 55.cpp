/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;

bool beautifulArray(std::vector<int> arr)
{
    int sumRight=0, len = arr.size();
    if(len==0||len==1) return false;
    for(int i=0;i<len;i++)
        sumRight+=arr[i];
    int sumLeft=0;
    sumRight-=arr[0];
    for(int i=1;i<len;i++)
    {
        sumRight-=arr[i];
        sumLeft+=arr[i-1];
        if(sumLeft==sumRight)
            return true;
    }
    return false;
}