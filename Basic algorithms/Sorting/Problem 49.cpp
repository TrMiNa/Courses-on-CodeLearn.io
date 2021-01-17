/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<string> sortByLength(std::vector<string> inputArray)
{
    string temp;
    int countChange;
    int len = inputArray.size();
    if(len==0||len==1)
        return inputArray;
    do
    {
        countChange=0;
        for(int i=0;i<len-1;i++)
        {
            if(inputArray[i].length()>inputArray[i+1].length())
            {
                temp = inputArray[i];
                inputArray[i] = inputArray[i+1];
                inputArray[i+1] = temp;
                countChange++;
            }
        }
    } while(countChange>0);
    return inputArray;
}