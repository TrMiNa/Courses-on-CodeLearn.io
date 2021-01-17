/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
int chessKnight(string Cell)
{
    int x = Cell[0] - 'a'+1;
    int y = Cell[1]-'0';
    vector<int> xMove = {2, 1, -1, -2, -2, -1, 1 , 2};
    vector<int> yMove = {1, 2, -2, -1, 1, 2, -2, -1};
    int countPossibleStep = 0;
    for(int i=0;i<8;i++)
    {
        if((x+xMove[i]>=1)&&(x+xMove[i]<=8)&&(y+yMove[i]>=1)&&(y+yMove[i]<=8))
            countPossibleStep++;
    }
    return countPossibleStep;
}