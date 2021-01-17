/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int commonCharacterCount(string s1, string s2)
{
    int countA[256], countB[256], countCommon=0;
    for(int i=0;i<256;i++)
    {
        countA[i]=0;
        countB[i]=0;
    }
    for(int i=0;i<s1.length();i++)
        countA[s1[i]-1]++;
    for(int i=0;i<s2.length();i++)
        countB[s2[i]-1]++;
    for(int i=0;i<256;i++)
    {
        if(countA[i]>countB[i])
            countCommon+=countB[i];
        else
            countCommon+=countA[i];
    }
    return countCommon;
}