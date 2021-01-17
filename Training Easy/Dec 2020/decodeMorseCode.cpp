string morseTranslate(string s)
{
    if (s == ".-") return "a";
    else if (s == "-...") return "b";
    else if (s == "-.-.") return "c";
    else if (s == "-..") return "d";
    else if (s == ".") return "e";
    else if (s == "..-.") return "f";
    else if (s == "--.") return "g";
    else if (s == "....") return "h";
    else if (s == "..") return "i";
    else if (s == ".---") return "j";
    else if (s == "-.-") return "k";
    else if (s == ".-..") return "l";
    else if (s == "--") return "m";
    else if (s == "-.") return "n";
    else if (s == "---") return "o";
    else if (s == ".--.") return "p";
    else if (s == "--.-") return "q";
    else if (s == ".-.") return "r";
    else if (s == "...") return "s";
    else if (s == "-") return "t";
    else if (s == "..-") return "u";
    else if (s == "...-") return "v";
    else if (s == ".--") return "w";
    else if (s == "-..-") return "x";
    else if (s == "-.--") return "y";
    else if (s == "--..") return "z";
    else if (s == ".---") return "1";
    else if (s == "..---") return "2";
    else if (s == "...--") return "3";
    else if (s == "....-") return "4";
    else if (s == ".....") return "5";
    else if (s == "-....") return "6";
    else if (s == "--...") return "7";
    else if (s == "---..") return "8";
    else if (s == "----.") return "9";
    else if (s == "-----") return "0";
    else return " ";
}

string decodeMorseCode(string s)
{
    s+= " ";
    string result = "", temp="";
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]!=' ')
        {
            temp+=s[i];
            continue;
        }
        else if((s[i]==' '))
        {
            result.append(morseTranslate(temp));
            temp.clear(); 
        }
        else if(s[i]=='/')
        {
            result+=" ";
        }
    }
    return result;
}