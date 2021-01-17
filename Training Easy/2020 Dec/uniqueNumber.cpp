/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int uniqueNumber(std::vector<int> arr)
{
    bool isUnique;

    while(arr.size()>1)
    {
        isUnique=true;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[0]==arr[i])
            {
                isUnique=false;
                arr.erase(arr.begin()+i);
                arr.erase(arr.begin());
                break;
            }
        }
        if(isUnique)
            return arr[0];
    }
    return arr[0];
}