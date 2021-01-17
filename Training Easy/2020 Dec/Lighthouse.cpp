/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string lighthouse(int h, int m, int s)
{
    if(h<18&&h>=6) return "False";
    s = m*60+s+24*3600;
    s=s%25;
    if(s<10) return "True";
    else return "False";
}