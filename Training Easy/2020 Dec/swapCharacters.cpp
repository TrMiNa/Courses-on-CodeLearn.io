/* ************************************************

    Created by TrMiNa on 12/17/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool swapCharacters(string str1, string str2)
{
    int len1=str1.size(), len2=str2.size();
    if(len1!=len2||len1<2||len2<2)
        return false;
    for(int i=0;i<len1-1;i++)
    {
        for(int j=i+1;j<len1;j++)
        {
            swap(str1[i], str1[j]);
            if((str1.compare(str2))==0)
                return true;
            swap(str1[i], str1[j]);
        }
    }
    return false;
}