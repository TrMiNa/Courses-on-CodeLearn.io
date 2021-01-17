/* ************************************************

    Created by TrMiNa on 01/01/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string controlRobot(string start, string directions)
{
    std::vector<string> result = {"B", "DB", "D", "DN", "N", "TN", "T", "TB"};
    int startIdx, endIdx, step=0;
    //Find start Idx;
    for(int i=0;i<result.size();i++)
    {
        if(result[i]==start)
        {
            startIdx=i;
            break;
        }
    }
    for(int i=0;i<directions.length();i++)
    {
        if(directions[i]=='P')
            step++;
        else
            step--;
    }
    endIdx=startIdx+step;
    while(endIdx<0)
        endIdx+=8;
    endIdx=endIdx%8;
    return result[endIdx];    
}