/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool checkStrongPassword(string password)
{
    int len=password.size();
    if(len<6) return false;
    int hasLower=0, hasUpper=0, hasNum=0, hasSpecial=0;
    for(int i=0;i<len;i++)
    {
        if(hasLower==0)
        {
            if(password[i]>='a'&&password[i]<='z')
            {
                hasLower=1;
                continue;
            }
        }
        if(hasUpper==0)
        {
            if(password[i]>='A'&&password[i]<='Z')
            {
                hasUpper=1;
                continue;
            }
        }
        if(hasSpecial==0)
        {
            if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
            {
                hasSpecial=1;
                continue;
            }
        }
        if(hasNum==0)
        {
            if(password[i]>='0'&&password[i]<='9')
            {
                hasNum=1;
                continue;
            }
        }
    }
    if(hasLower*hasNum*hasSpecial*hasUpper)
        return true;
    return false;
}