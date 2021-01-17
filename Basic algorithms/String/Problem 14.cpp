/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isTandemRepeat(string inputString)
{
    int len=inputString.length();
    if(len%2==1||len==0)
        return false;
    for(int i=0;i<len/2;i++)
    {
        if(inputString[i]!=inputString[len/2+i])
            return false;
    }
    return true;
}