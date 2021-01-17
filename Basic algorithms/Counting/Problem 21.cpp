/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool checkEqualFrequency(std::vector<int> inputArray)
{
    if(inputArray.size()==2) return true;
    if(inputArray.size()==0) return false;
    //Sorting
    for(int i=0;i<inputArray.size()-1;i++)
    {
        for(int j=i+1;j<inputArray.size();j++)
        {
            if(inputArray[i]>inputArray[j])
            {
                int temp = inputArray[i];
                inputArray[i]=inputArray[j];
                inputArray[j]=temp;
            }
        }
    }
    //Count frequenci
    int constFrequence=1;
    for(int i=0;i<inputArray.size();i++)
    {
        if(inputArray[i]==inputArray[i+1])
            constFrequence++;
        else
            break;
    }
    inputArray.push_back(INT_MIN);
    int tempCount=1;
    for(int i=constFrequence;i<inputArray.size()-1;i++)
    {
        if(inputArray[i]==inputArray[i+1])
            tempCount++;
        else
        {
            if(tempCount!=constFrequence)
                return false;
            tempCount=1;
        }
    }
    return true;
}