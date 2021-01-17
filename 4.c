#include<stdio.h>
#include<string.h>

int main()
{
    char* kw [] = {"auto", "break", "case", "char", "continue", "do", "default", "const", "double", "else", "enum", "extern", "for", "if", "goto", "float", "int", "long", "register", "return", "signed", "static", "sizeof", "short", "struct", "switch", "typedef", "union", "void", "while", "volatile", "unsigned"};
    char item[100];
    int i;
    printf("\nEnter a token: ");
    scanf("%s",item);
    for(i = 0; i < 32; ++i)
    {
        if(strcmp(item, kw[i]) == 0)
        {
            printf("\nKeyword entered");
            break;
        }
    }
    return 0;
}
