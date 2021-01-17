/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
bool areSimilar(std::vector<int> a, std::vector<int> b)
{
    vector<int> diffIdx;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]!=b[i])
        {
            diffIdx.push_back(i);
        }
    }
    if(diffIdx.size()==0) return true;
    if(diffIdx.size()==1||diffIdx.size()>2) return false;
    if(b[diffIdx[0]]==a[diffIdx[1]]&&b[diffIdx[1]]==a[diffIdx[0]])
        return true;
    else
        return false;
}