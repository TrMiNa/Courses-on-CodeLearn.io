/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isPrime(int n)
{
	if (n <= 1)
		return false;
	else if (n == 2)
		return true;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}
}

int greatestCommonPrimeDivisor(int a, int b)
{
	int gdc = -1;
	for (int i = 2; i <= ((a > b) * (a - b) + b); i++)
	{
		if (a % i == 0 && b % i == 0 && isPrime(i))
			gdc = i;
	}
	return gdc;
}