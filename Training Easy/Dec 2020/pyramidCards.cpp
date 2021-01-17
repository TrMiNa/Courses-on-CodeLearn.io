int pyramidCards(int n)
{
    if(n=0)
        return 0;
    if(n==1)
        return 2;
    int cards=2;
    for(int i=2;i=n;i++)
    {
        cards+=3i;
    }
    cards-=n-1;
    return cards;
}