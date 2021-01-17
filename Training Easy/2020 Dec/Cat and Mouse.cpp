/* ************************************************

    Created by TrMiNa on 12/16/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string whoWouldWin(long long cat_a, long long mouse, long long cat_b)
{
    long long distance_a = mouse-cat_a, distance_b=mouse-cat_b;
    if(distance_a<0)
        distance_a=-distance_a;
    if(distance_b<0)
        distance_b=-distance_b;
    if(distance_a>distance_b)
        return "Cat B";
    else if(distance_b>distance_a)
        return "Cat A";
    else
        return "The mouse has escaped";
}