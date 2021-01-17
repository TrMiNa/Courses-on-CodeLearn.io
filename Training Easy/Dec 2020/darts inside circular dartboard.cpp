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