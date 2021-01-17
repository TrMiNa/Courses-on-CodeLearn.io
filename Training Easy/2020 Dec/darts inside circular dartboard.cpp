/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int dartsInsideCircularDartboard(std::vector<std::vector<int>> points, int r)
{
    int x, y, countInsidePoint=0, rSquare=r*r;
    for(int i=0;i<points.size();i++)
    {
        x=points[i][0];
        y=points[i][1];
        if(x*x+y*y<=rSquare)
            countInsidePoint++;
    }
    return countInsidePoint;
}