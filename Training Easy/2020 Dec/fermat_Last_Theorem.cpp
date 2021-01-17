/* ************************************************

    Created by TrMiNa on 12/25/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<int> fermatLastTheorem(int n)
{
    std::vector<int> result0 = {-1, -1, -1}, result1 = {3, 4 ,5}, result2 = {1, 2 ,3};
    if(n>2||n<=0) return result0;
    if(n==2) return result1;
    if(n==1) return result2;
}