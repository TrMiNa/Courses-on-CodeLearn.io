/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool insideCircle(std::vector<int> point, std::vector<int> center, int radius)
{
    return ( ( (point[0]-center[0])*(point[0]-center[0]) + (point[1]-center[1])*(point[1]-center[1]) ) <= (radius*radius));
}