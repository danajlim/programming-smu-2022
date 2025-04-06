void print(int a[][6], int n)
{
    int i, j;
    printf("{");
    for (i=0;i<n;i++){
        printf("{");
        for (j=0; j<6; j++)
            printf("%d%s", a[i][j], j==5 ? " " : ",");
        printf("}%s", i==3 ? "" : ",");
    }
    printf("};\n");
}
