/* ************************************************

    Created by TrMiNa on 01/13/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool regularBracketSequence(string str)
{
    if(str.length()==0) return true;
    for (int i = 0; i < str.length(); i++)
	{
		while (i<str.length() && str[i] != '(' && str[i]!= ')')
			str.erase(str.begin() + i);
	}

	int countRound = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(')
			countRound++;
		else if (str[i] == ')')
			countRound--;
		if (countRound < 0)
			return false;
	}
	if (countRound != 0)
		return false;
	return true;
}