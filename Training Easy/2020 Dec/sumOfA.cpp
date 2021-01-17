/* ************************************************

    Created by TrMiNa on 12/24/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int sumOfA(int a)
{
    string aStr=to_string(a);
    string aa="", aaa="";
    aa += aStr;
    aa += aStr;
    aaa+=aStr;
    aaa+=aStr;
    aaa+=aStr;
    return a+stoi(aa)+stoi(aaa);
}