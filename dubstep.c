#include<stdio.h>
#include<string.h>
int pal(char s[1005],int o, int l)
{
    int i,j,c=0;
    for(i=o,j=l;i<=l+1/2;i++,j--)
    {
        if(s[i]==s[j])
        {
            continue;
        }
        else {return 0;}
    }
    return 1;
}
int main()
{
    char s[1005];
    scanf("%s",&s);
    int n,i,l,k,d,c=0,m,j=0;l=strlen(s);
    scanf("%d",&k);
    for(i=1;i<l;i++)
    {
        if(pal(s,j,i)==1)
        {
            c=c+1;m=i;d=i-j;
            j=i+1;i=j+d-1;
        }
        else if(j>=l-1){break ;}
    }
    if(c==k&&m==l-1)
    {
        printf("YES");
    }
    else if(l==1)
    {
        printf("YES");
    }
    else {printf("NO");}
}

