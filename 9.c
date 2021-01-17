#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE 100
char stack[SIZE];
int top=-1;

void push(char item)
{
    if(top>=SIZE)
    {
        printf("\n Stack Overflow");
    }
    else
    {
        
        stack[++top]=item;
    }
    
}
char pop()
{
    char item;
    if(top==-1)
    {
        printf("\n Stack is empty");
        exit(1);
    }
    else
    {
        item=stack[top];
        --top;
        return item;
    }
    
}

int is_operator(char symb)
{
    if(symb=='^'||symb=='*'||symb=='/'||symb=='+'||symb=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
}
int precendence(char symb)
{
    if(symb=='^')
    {
        return 5;
    }
    else if(symb=='*')
    {
        return 4;
    }
   else if(symb=='^')
    {
        return 3;
    }
    else if(symb=='+')
    {
        return 2;
    }
    else if(symb=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
   
    
}

void infix_to_postfix(char infix[],char postfix[])
{   
    char item;int x;
    int i=0,j=0;
    push('(');
    strcat(infix,")");
    item=infix[0];
    while(item!='\0')
    {
        if(item=='(')
        {
            push(item);
        }
        else if(isdigit(item)||isalpha(item))
        {
            postfix[j]=item;
            ++j;
        }
        else if(is_operator(item)==1)
        {
            x=pop();
            while(precendence(x)>precendence(item))
            {
                postfix[j]=x;
                ++j;
                x=pop();
            }
            push(x);
            push(item);
        }
        else if(item==')')
        {
            x=pop();
            while(x!='(')
            {
                postfix[j]=x;
                ++j;
                x=pop();
            }
        }
        else{
            printf("\n Inavlid infix Expression");
            exit(1);
        }
    ++i;
    item=infix[i];
    }
    postfix[j]='\0';
   
}


int main()
{

    char infix[SIZE],postfix[SIZE];
    printf("\n Enter the infix expression:");
    gets(infix);
    infix_to_postfix(infix,postfix);
    puts(postfix);

    return 0;

}