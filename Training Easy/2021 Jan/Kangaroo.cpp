/* ************************************************

    Created by TrMiNa on 01/01/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool kangaroo(int x1, int v1, int x2, int v2)
{
    if((x1<x2 && v1<v2 ) || ( v1>v2 && x1>x2 ))
        return false;
    if((x1!=x2&&v1==v2)||(x1==x2&&v1!=v2))
        return false;
    if(x1==x2&&v1==v2)
        return true;
    int stepToCatch=(x1-x2), deltaVelocity = v1-v2;

    if(stepToCatch%deltaVelocity==0)
        return true;
    else
        return false;
}