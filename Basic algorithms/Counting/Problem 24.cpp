/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;

bool charactersRearrangement(string string1, string string2)
{
    int len1=string1.length(), len2=string2.length();
    if(len1!=len2)
        return false;
    vector<int> countStr1 (256, 0), countStr2 (256, 0);
    for(int i=0;i<len1;i++)
    {
        countStr1[string1[i]-1]++;
        countStr2[string2[i]-1]++;
    }
    for(int i=0;i<256;i++)
    {
        if(countStr1[i]!=countStr2[i])
            return false;
    }
    return true;
}