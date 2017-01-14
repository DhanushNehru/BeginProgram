#include<stdio.h>
main()
{
    char ch[100];int i,j,count=1,flag=0;
    printf("Enter a word ::");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        for(j=i;ch[j]!='\0';j++)
        {
            if(ch[i]==ch[j] && i!=j)
            {
                count++;
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("%c :: %d\n",ch[i],count);
        flag=0;
        count=1;
    }
}
