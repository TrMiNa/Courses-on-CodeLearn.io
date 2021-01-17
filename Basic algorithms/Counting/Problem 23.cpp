/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int differentSubstringsTrie(string inputString)
{
    int count=0;
    string p = " ";
    for(int i=0;i<inputString.length();i++)
    {
        string temp ="";
        for(int j=i;j<inputString.length();j++)
        {
            temp+=inputString[j];
            string temp2 = " " + temp + " ";
            if(p.find(temp2) < 0 || p.find(temp2)> p.length()-1)
            {
                count++;
                p+=( temp + " ");
            }
        }
    }
    return count;
}