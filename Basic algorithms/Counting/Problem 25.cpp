/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPangram(string sentence)
{
    for(int i=0;i<sentence.length();i++)
        if(sentence[i]>='A'&&sentence[i]<='Z')
            sentence[i]+=32;
    std::vector<int> countChar (256, 0);
    for(int i=0;i<sentence.length();i++)
        countChar[sentence[i]-1]++;
    for(int i = 'a'-1;i<'z';i++)
        if(countChar[i]==0)
            return false;
    return true;
}