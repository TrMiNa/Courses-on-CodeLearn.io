/* ************************************************

    Created by TrMiNa on 12/15/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int maxLenSubStr(string str)
{
    int max=0;
    for(int i=0;i<str.length()-1;i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                int temp=j-i+1;
                if(temp>max)
                    max=temp;
            }
        }
    }  
    return max;
}