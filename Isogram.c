main()
{
    int i,j,flag=0;char ch[30];
    printf("Enter a word ::");
    scanf("%s",&ch);
    for(i=0;i<strlen(ch);i++)
    {
        for(j=0;j<strlen(ch);j++)
        {
            if(ch[i]==ch[j] && i!=j)
                ++flag;
        }
    }
    if(flag>0)
         printf("Not Isogram");
    else
         printf("Isogram");
}
