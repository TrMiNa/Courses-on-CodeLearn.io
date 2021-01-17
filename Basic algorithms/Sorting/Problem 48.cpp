/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<int> sortByHeight(std::vector<int> a)
{
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==-1)
            continue;
        for(int j=i+1;j<a.size();j++)
        {
            if(a[j]==-1) continue;
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return a;
}