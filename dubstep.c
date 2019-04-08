#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];

    int i,n,j,c=0,p;
    scanf("%d %d",&p,&n);scanf("%s",&s);
    int l=strlen(s);
    for(i=1;i<=n;i++)
    {

        for(j=0;j<l-1;j++)
        {
            if(s[j]!=s[j+1])
            {
                char g;
                g=s[j];
                s[j]=s[j+1];
                s[j+1]=g;
                j=j+1;
            }
            else {continue ;}
        }

    }
    printf("%s",s);
    return 0;
}

