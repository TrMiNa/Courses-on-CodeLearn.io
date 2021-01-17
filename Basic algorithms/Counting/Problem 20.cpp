/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

int differentValuesInMultiplicationTable2(int n, int m)
{
    vector<int> table;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            table.push_back(i*j);
    }
    for(int i=0;i<table.size()-1;i++)
    {
        for(int j=i+1;j<table.size();)
        {
            if(table[i]==table[j])
                table.erase(table.begin()+j);
            else
                j++;
        }
    }
    return table.size();
}