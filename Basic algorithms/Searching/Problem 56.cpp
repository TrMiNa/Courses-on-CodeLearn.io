/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;

std::vector<int> missingValue(std::vector<int> a, std::vector<int> b)
{
    vector<bool> checkNum (10000, false);
    for(int i=0;i<a.size();i++)
        checkNum[a[i]] = true;

    vector<int> result;
    for(int i=0;i<b.size();i++)
        if(checkNum[b[i]]==false)
            result.push_back(b[i]);
    
    sort(result.begin(), result.end());
    return result;
}