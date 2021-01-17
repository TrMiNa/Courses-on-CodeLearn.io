/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;

string charToBinary(char n)
{
    string result = "00000000";
    if(n>=64){
        result[1] = '1';
        n-=64;
    }
    if(n>=32){
        result[2] = '1';
        n-=32;
    }
    if(n>=16){
        result[3] = '1';
        n-=16;
    }    
    if(n>=8){
        result[4] = '1';
        n-=8;
    }
    if(n>=4){
        result[5] = '1';
        n-=4;
    }
    if(n>=2){
        result[6] = '1';
        n-=2;
    }
    if(n>=1){
        result[7] = '1';
        n-=1;
    }
    return result;
}

string textToBinary(string text)
{
    string result = "";
    int len=text.length();
    for(int i=0;i<len;i++)
    {
        result+=charToBinary(text[i]);
        if(i<len-1)
            result+=' ';
    }
    return result;
}