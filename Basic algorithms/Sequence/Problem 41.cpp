/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
std::vector<int> alternatingSums(std::vector<int> a)
{
    int weightTeam1=0, weightTeam2=0;
    vector<int> result;
    for(int i=0;i<a.size();i++)
    {
        if(i%2==0)
            weightTeam1+=a[i];
        else
            weightTeam2+=a[i];
    }
    result.push_back(weightTeam1);
    result.push_back(weightTeam2);
    return result;
}