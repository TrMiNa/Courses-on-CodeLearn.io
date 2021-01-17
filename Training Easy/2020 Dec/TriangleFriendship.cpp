/* ************************************************

    Created by TrMiNa on 12/18/20.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */

bool isTripleFriend(std::vector<int> arr, int x)
{
    int len=arr.size();
    if(x>len) 
        return false;
    int a=arr[x-1];
    if(a>len) 
        return false;
    int b=arr[a-1];
    if(b>len) 
        return false;
    int c=arr[b-1];
    if(c==x&&a!=b&&b!=c&&c!=a)
        return true;
    return false;

}
bool triangleFriendship(std::vector<int> arr)
{
    for(int i=0;i<arr.size();i++)
    {
        if(isTripleFriend(arr, i+1))
            return true;
    }
    return false;
}