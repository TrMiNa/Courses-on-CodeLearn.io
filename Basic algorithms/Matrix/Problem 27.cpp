/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isBlackCell(string cell)
{
    string column;
    int row;
    column = cell[0];
    row = cell[1]-'0';
    if((column[0]=='A'||column[0]=='C'||column[0]=='E'||column[0]=='G'))
    {
        if(row%2==1)
            return true;
        else
            return false;
    }
    else
    {
        if(row%2==0)
            return true;
        else 
            return false;
    }
}

bool chessBoardCellColor(string cell1, string cell2)
{
    if(isBlackCell(cell1)==isBlackCell(cell2))
        return true;
    else
        return false;
}