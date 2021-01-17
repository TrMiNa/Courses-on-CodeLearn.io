/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
int differentSymbolsNaive(string s)
{
    vector<int> countChar (256, 0);
    for(int i=0;i<s.size();i++)
        countChar[s[i]-1]++;
    int countUniqueChar=0;
    for(int i=0;i<256;i++)
        if(countChar[i])
            countUniqueChar++;
    return countUniqueChar;    
}