/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool bishopAndPawn(string bishop, string pawn)
{
    if(bishop.compare(pawn)==0)
        return false;
    char xBishop = bishop[0], xPawn = pawn[0];
    int yBishop = bishop[1] - '0', yPawn = pawn[1]-'0';
    int xDelta, yDelta;
    xDelta = abs(xBishop - xPawn);
    yDelta = abs(yBishop - yPawn);
    if(xDelta==yDelta)
        return true;
    return false;
}