/* ************************************************

    Created by TrMiNa on 01/01/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string diagonalLine(std::vector<string> arr)
{
    //Check default length
    if(arr.size()<2||arr.size()!=arr[0].length())
        return "-1";
    for(int i=0;i<arr.size()-1;i++)
        if(arr[i].length()!=arr[i+1].length())
            return "-1";
    //Get two diagonals
    string mainDiagonal="", antiDiagonal = "";
    for(int i=0;i<arr.size();i++)
    {
        mainDiagonal+=arr[i][i];
        antiDiagonal+=arr[i][arr.size()-1-i];
    }
    string result="";
    result+=mainDiagonal;
    result+=' ';
    result+=antiDiagonal;
    return result;
}