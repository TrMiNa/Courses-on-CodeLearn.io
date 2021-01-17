/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isMonotonous(std::vector<int> sequence)
{
    if(sequence.size()==1)
        return true;
    if(sequence[0]<sequence[1])
    {
        for(int i=0;i<sequence.size()-1;i++)
        {
            if(sequence[i]>=sequence[i+1])
                return false;
        }
        return true;
    }
    else if(sequence[0]>sequence[1])
    {
        for(int i=0;i<sequence.size()-1;i++)
        {
            if(sequence[i]<=sequence[i+1])
                return false;
        }
        return true;
    }
    else
        return false;
}