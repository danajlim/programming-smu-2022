void init(int a[][6], int n)
{
    int i,j;
    for (i=0; i<n; i++)
        for (j=0; j<6; j++)
            a[i][j]=i+j;
}
