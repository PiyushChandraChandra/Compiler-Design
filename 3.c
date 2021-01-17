#include<stdio.h>
#include<string.h>

int main()
{
    int flag=0;
    char* kw [] = {"auto", "break", "case", "char", "continue", "do", "default", "const", "double", "else", "enum", "extern", "for", "if", "goto", "float", "int", "long", "register", "return", "signed", "static", "sizeof", "short", "struct", "switch", "typedef", "union", "void", "while", "volatile", "unsigned"};
    char* ckw []={"if","else","default","switch","case"};
    char* ikw []={"for","while","do","goto","break","continue"};
    char* dkw []={"int","char","float","double","long","signed","unsigned"};
    char item[100];
    int i;
    printf("\nEnter a token: ");
    scanf("%s",item);
    for(i = 0; i < 32; ++i)
    {
        if(strcmp(item,kw[i]) == 0)
        {
            
            flag=1;
           break;
        }    
    }
    if(flag==1)
    {
        for(int j=0;j<10;j++)
        {
            if(strcmp(item,ckw[j])== 0)
            {
                printf("Conditional Keyword Entered");
                break;
            }
            else if(strcmp(item,ikw[j])==0)
            {
                printf("\n Iteration keyword Entered");
                break;
            }
            else
            {
                printf("Data Type Keyword Entered");
                break;
            }
        }
    }
    else{
        printf("\n Not a keyword");
    }
   
    return 0;
}