int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("arguments error!\n");
    } else
        printf("%s+%s=%d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));

    return EXIT_SUCCESS;
}
