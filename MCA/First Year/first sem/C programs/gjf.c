int main()
{
    int n, flg;
    printf("enter a number");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        flg = 1;
    }

    for (int i = 2; i <= n / 2; i++)
    {

        if (n % i == 0)
        {
            flg = 1;
            break;
        }
    }
    if (flg == 0)
    {
        printf("p");
    }
    else
        printf("np");
    // for (int i = 2; i < n; i++)
    // {
    //     if (n == 2)
    //     {
    //         printf("p");
    //     }
    //     else if (n % i == 0)
    //     {
    //         printf("np\n");
    //         break;
    //     }
    //     else
    //     {
    //         printf("p");
    //         break;
    //     }
    // }

    return 0;
}
