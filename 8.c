#include<stdio.h>
#include<string.h>
int main()
{
    char item[100];
    int length;
    printf("\n Enter a sigle line of Code:");
    gets(item);
    length=strlen(item);
    int i=0;
    int flag=0;
    for(i=0;i<length;i++)
    {
    if(item[i]=='/')
    {
            if(item[i+1]=='/')
            {
                flag=1;
                break;
            }
            else if(item[i+1]=='*')
            {
                for(int j=i+1;j<length;j++)
                {
                    if(item[j]=='*')
                    {
                        if(item[j+1]=='/')
                        {
                            flag=2;
                            break;
                        }
                    }
                }
                

            }
          
            
    }
   
   
}

    if(flag==1)
    {
           
           printf("\nContains Single Line Comment"); 

    }
    else if(flag==2)
    {
        printf("\nContains a Multiline Comment");
    }
    else{
        printf("Doesnt Contain a comment");
    }
   
  
  
    return 0;
    
}
