int rand()
{
    static int i = 0;
    static int mine[6] = {9, 8, 10, 24, 75, 9};
    return (mine[i++]);
}