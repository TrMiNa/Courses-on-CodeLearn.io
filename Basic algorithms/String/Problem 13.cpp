/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string formatString(string input)
{
    while(input[0]==' ')
        input.erase(0, 1);
    for(int i=0;i<input.length()-1;i++)
    {
        while(input[i]==' '&&input[i+1]==' ')
            input.erase(i+1, 1);
    }
    while(input[input.length()-1]==' ')
        input.erase(input.length()-1, 1);
    return input;
}