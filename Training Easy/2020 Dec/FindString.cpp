/* ************************************************

    Created by TrMiNa on 12/27/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int findString(string mainString, string findString)
{
    int lenMainStr=mainString.length(), lenSubStr=findString.length();
    int countSubStr=0, j;
    for(int i=0;i<lenMainStr;i++)
    {
        j=0;
        while(mainString[i+j]==findString[j])
        {
            j++;
            if(j==lenSubStr)
            {
                countSubStr++;
                break;
            }
        }
    }
    return countSubStr;
}