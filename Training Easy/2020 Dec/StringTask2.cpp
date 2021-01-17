/* ************************************************

    Created by TrMiNa on 12/23/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

string stringTask2(string str)
{
    for(int i=0;i<str.length();i++)
        while(str[i]=='a'||str[i]=='o'||str[i]=='y'||str[i]=='e'||str[i]=='u'||str[i]=='i'||str[i]=='A'||str[i]=='O'||str[i]=='Y'||str[i]=='E'||str[i]=='U'||str[i]=='I')
            str.erase(str.begin()+i);

    for(int i=0;i<str.length();)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]+=32;      
        str.insert(i, ".");
        i+=2;
    }
    return str;
}