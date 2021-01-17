#include<stdio.h>
int main()
{
    FILE *fptr;
    char c;
    int count=0;
    fptr=fopen("myfile.txt","r");
    while ((c=getc(fptr))!=EOF)
    {
        //putchar(c);
        printf("%c",c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        {
            count++;
        }
    }
    printf("\n The number of vowels are:%d",count);
    fclose(fptr);
    return 0;
    
}