/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<int> disappearedNumbers(std::vector<int> a)
{
    bool isAppeared[10000];
    std::vector<int> result;
    for(int i=0;i<a.size();i++)
        isAppeared[i]=false;
    for(int i=0;i<a.size();i++)
    {
        isAppeared[a[i]-1]=true;
    }
    for(int i=0;i<a.size();i++)
    {
        if(!isAppeared[i])
            result.push_back(i+1);
    }
    return result;
}