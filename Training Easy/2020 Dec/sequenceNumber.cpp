/* ************************************************

    Created by TrMiNa on 12/29/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

std::vector<long long> sequenceNumber(long long l, long long r)
{
    std::vector<long long> sequence = {1,2,3,4,5,6,7,8,9,12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};
    std::vector<long long> result;
    for(long long i=0;i<sequence.size();i++)
    {
        if(sequence[i]>=l&&sequence[i]<=r)
            result.push_back(sequence[i]);
        if(sequence[i]>r)
            break;
    }
    return result;
}