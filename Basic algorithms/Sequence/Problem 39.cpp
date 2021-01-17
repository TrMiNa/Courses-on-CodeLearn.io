/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isArithmeticProgression(std::vector<int> sequence)
{
    int delta = sequence[1]-sequence[0];
    for(int i=0;i<sequence.size()-1;i++)
    {
        if(sequence[i+1]-sequence[i]!=delta)
            return false;
    }
    return true;
}