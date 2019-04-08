#include<stdio.h>
#include<string.h>
int main()
{
    char s[205];
    fgets(s,205,stdin);
    int i,j,c=0,l;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
            if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
            {c=c+3;
                if(i==0||i==l-4)
                    {i=i+2;
                    continue ;

                }
                else if(c==i)
                {
                    continue;
                }
                else if(i>=2)
                    {
                        if(s[i-1]=='B'&&s[i-2]=='U'&&s[i-3]=='W')
                        {
                            i=i+2;continue;
                        }
                        printf(" ");
                        i=i+2;
                       continue; ;
                    }
                continue ;

            }
           else {printf("%c",s[i]);}

    }
    return 0;
}

