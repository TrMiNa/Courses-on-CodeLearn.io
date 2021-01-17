/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool findPath(std::vector<std::vector<int>> matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    int startI, startJ, totalStep=row*col, countStep=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]==1)
            {
                startI = i;
                startJ = j;
                i=row;
                j=col;
            }
        }
    }
    while(countStep<totalStep)
    {
        if((startI>=0&&startI<=row-2)&&(matrix[startI][startJ]+1==matrix[startI+1][startJ]))
        {
            startI++;
            countStep++;
            continue;
        }
        else if(startI>0&&matrix[startI][startJ]+1==matrix[startI-1][startJ])
        {
            startI--;
            countStep++;
            continue;
        }
        else if(startJ<=col-2&&matrix[startI][startJ]+1==matrix[startI][startJ+1])
        {
            startJ++;
            countStep++;
            continue;
        }
        else if(startJ>0&&matrix[startI][startJ]+1==matrix[startI][startJ-1])
        {
            startJ--;
            countStep++;
            continue;
        }
        else
            return false;
    }
    return true;
}