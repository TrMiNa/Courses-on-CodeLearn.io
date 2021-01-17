/* ************************************************

    Created by TrMiNa on 01/17/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

using namespace std;
std::vector<int> makeArrayConsecutive(std::vector<int> sequence)
{
    int len = sequence.size();
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(sequence[i]>sequence[j])
            {
                int temp=sequence[i];
                sequence[i]=sequence[j];
                sequence[j]=temp;
            }
        }
    }
    int count = sequence[0], R = sequence[len-1];
    vector<int> result;
    while(count<R)
    {
        if(count==sequence[0])
            sequence.erase(sequence.begin());
        else if (count<sequence[0])
            result.push_back(count);
        count++;
    }
    return result;
}