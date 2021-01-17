/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool checkPalindrome(string inputString)
{
    for(int i=0;i<(inputString.length()/2);i++)
    {
        if(inputString[i]!=inputString[inputString.length()-i-1])
            return false;
    }
    return true;
}