/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string distanceToZ(std::vector<int> a)
{
    string result = "";
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==-1) result.push_back(' ');
        else
            result.push_back(char(122-a[i]));
    }
    return result;
}