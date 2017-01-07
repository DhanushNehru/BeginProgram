main()
{
    int i,flag=0;char ch[20];
    printf("Enter a string");
    scanf("%s",&ch);
    for(i=0;i<strlen(ch);i++)
    {
        if(i%2==0)
            printf("%c",ch[i]);
    }
    printf(" ");
    for(i=0;i<strlen(ch);i++)
    {
        if(i%2==1)
            printf("%c",ch[i]);
    }
}
