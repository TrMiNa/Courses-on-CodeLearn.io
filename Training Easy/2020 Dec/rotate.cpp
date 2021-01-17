/* ************************************************

    Created by TrMiNa on 12/20/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<int> rotate(std::vector<int> arr, int k)
{
    int temp;
    int len=arr.size();
    k=k%len;
    while(k--)
    {
        temp=arr[len-1];
        for(int i=len-1;i>=1;i--)
            arr[i]=arr[i-1];
        arr[0]=temp;
    }
    return arr;
}