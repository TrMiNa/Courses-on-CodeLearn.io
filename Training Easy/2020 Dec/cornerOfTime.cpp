/* ************************************************

    Created by TrMiNa on 12/23/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int cornerOfTime(int h, int m)
{
    float angleH, angleM;
    h%=12;
    angleM=360.0*m/60.0;
    angleH=360.0*h/12.0+30.0*m/60.0;
    float result = fabs(angleH-angleM);
    if(result>180)
        return round(360-result);
    else return round(result);
}