#include<stdio.h>
#include<string.h>

int main()
{
    char* kw [] = {"auto", "break", "case", "char", "continue", "do", "default", "const", "double", "else", "enum", "extern", "for", "if", "goto", "float", "int", "long", "register", "return", "signed", "static", "sizeof", "short", "struct", "switch", "typedef", "union", "void", "while", "volatile", "unsigned"};
    char item[100];
    int i;
    printf("\nEnter an identifier: ");
    gets(item);

    if(item[0] >= 65 && item[0] <= 90 || item[0] >= 97 && item[0] <= 122 || item[0] == '_')
    {
        if(strlen(item) <= 32)    
        {
            for(i = 0; item[i]!= '\0'; ++i)       
            {
                if(item[i]==' ')
                {
                    printf("\nCannot contain whitespace");
                    return 0;
                }
            }

            for(i = 0; i < 32; ++i)            
            {
                if(strcmp(item, kw[i]) == 0)
                {
                    printf("\nCannot be a keyword");
                    return 0;
                }
            }

            for(i = 0; item[i] != '\0'; ++i)          
                if(item[i] >= 65 && item[i] <= 90 || item[i] >= 97 && item[i] <= 122 || item[i] == '_' || item[i] >= 48 && item[i] <= 57)
                    continue;
                else
                {
                    printf("\nContains special character which is not allowed");
                    return 0;
                }
            }
            printf("\nIdentifier is legal");
        }
        else
            printf("\nIdentifier is too long");
    }
    else
        printf("\nStarts with illegal symbol");
    return 0;
}
