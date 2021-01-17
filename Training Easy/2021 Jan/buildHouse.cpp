/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
std::vector<long long> buildHouse(long long S)
{
    long long i = sqrt(S);
    if(i*i==S)
        return {i, i};
    else
    {
        for(;i>0;--i)
        {
            if(S%i==0)
                return {S/i, i};
        }
    }
}