#include<stdio.h>
#include<string.h>
int main()
{
    char item[100];
    int length;
    printf("\n Enter a sigle line of Code:");
    gets(item);
    length=strlen(item);
    if(item[0]=='/')
    {
            if(item[1]=='/')
            {
                printf("\n Single Line comment found");
            }
            else if(item[1]=='*')
            {
                if(item[length-2]=='*'&&item[length-1]=='/')
                {
                    printf("\n Multi-line comment");
                }
                else
                {
                    printf("\n Invalid statement");
                }
                

            }
            else
            {
                printf("\n Invalid Statement");

            }
            
    }
    else
    {
        printf("Not a comment");
    }
    return 0;
    
}
