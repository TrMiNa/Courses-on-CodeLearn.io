/* ************************************************

    Created by TrMiNa on 12/24/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string upperCase(string str)
{

    //Delete beginning whitespaces
    while(str[0]==' ')
        str.erase(0, 1);

    //Uppercase the first char
    if(str[0]>='a'&&str[0]<='z')
        str[0]-=32;

    //Delete ending whitespaces
    int len=str.length();
    while(str[len-1]==' ')
    {
        str.erase(len-1, 1);
        len=str.length();
    }
    
    for(int i=1;i<len;i++)
    {
        if(str[i]==' ')
        {
            str.erase(i, 1);
            str[i]-=32;
            len=str.length();
        }
    }
    return str;
}