int numCoca(int x, int y)
{
    int count = x;
    while(x/y)
    {
        count += x/y;
        x=(x/y+x%y);
    }
    return count;
}