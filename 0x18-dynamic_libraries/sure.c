int rand()
{
    static int i = 0;
    static int mine[6] = {9, 8, 10, 24, 75, 9};
    if (i < 6)
	    return (mine[i++]);
    else
	    return (70);
}
