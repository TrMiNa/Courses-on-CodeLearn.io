/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
std::vector<int> prefixSums(std::vector<int> a)
{
    vector<int> result;
    int sum=0;
    for(int i=0;i<a.size();i++)
    {
        sum+=a[i];
        result.push_back(sum);
    }
    return result;
}