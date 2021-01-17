/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int stringsCrossover(std::vector<string> inputArray, string result)
{
    int count=0;
    for(int i=0;i<inputArray.size()-1;i++)
    {
        for(int j=i+1;j<inputArray.size();j++)
        {
            bool isCrossOverStr=true;
            for(int k=0;k<result.length();k++)
            {
                if(inputArray[i][k]!=result[k]&&inputArray[j][k]!=result[k])
                {
                    isCrossOverStr=false;
                    break;
                }
            }
            if(isCrossOverStr) count++;
        }
    }
    return count;
}
