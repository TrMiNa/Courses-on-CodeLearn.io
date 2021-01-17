/* ************************************************

    Created by TrMiNa on 01/01/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string splitEncode(string str)
{
    string result = "";
    str+='_';
    int count, i=0;
    for(int i=0;i<str.length();i++)
        if(str[i]!='#'&&str[i]!='_')
            return "NOT VALID";
    for(int i=0;i<str.length();i++)
    {
        count=0;
        char ch;
        while(str[i]=='#')
        {
            count++;
            i++;
        }
        if(str[i]=='_')
        {
            ch = count+'a'-1;
            result+=char(ch);
        }
    }
    return result;
}