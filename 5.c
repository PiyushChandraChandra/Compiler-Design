#include<stdio.h>
#include<string.h>

int main()
{
    char* kw [] = {"auto", "break", "case", "char", "continue", "do", "default", "const", "double", "else", "enum", "extern", "for", "if", "goto", "float", "int", "long", "register", "return", "signed", "static", "sizeof", "short", "struct", "switch", "typedef", "union", "void", "while", "volatile", "unsigned"};
    char item[200];
    char temp[50];
    int i = 0, index = 0, countkw = 0, j;
    printf("\nEnter tokens with a space at the end: ");
    gets(item);
    strcat(item," ");
    while(item[i] != '\0')
    {
        if(item[i] == ' ')
        {
            temp[index] = '\0';
            for(j = 0; j < 32; ++j)
            {
                if(strcmp(temp, kw[j]) == 0)
                {
                    ++countkw;
                    break;
                }
            }
            index = 0;
            temp[0] = '\0';
        }
        else
        {
            temp[index] = item[i];
            ++index;
        }
        ++i;
    }
    printf("\nNumber of keywords  = %d",countkw);
    return 0;
}
