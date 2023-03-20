int rand()
{
    static int i = 0;
    static int mine[6] = {8, 8, 7, 9, 23, 74};
    if (i < 6)
	    return (mine[i++]);
    else
	    return (i * 16807 % 2147483647);
}
