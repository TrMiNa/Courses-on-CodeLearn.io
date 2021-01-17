/* ************************************************

    Created by TrMiNa on 12/15/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int numCoca(int x, int y)
{
    int count = x;
    while(x/y)
    {
        count += x/y;
        x=(x/y+x%y);
    }
    return count;
}