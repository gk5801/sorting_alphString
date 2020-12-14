#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20], t[20]; // Here, we will take two dimensional array
    int i, j;
    printf("Enter Any Five Names :\n");
    for(i=0; i<5; i++)
    {
        gets(str[i]);
    }
    /* Comparing strings or names*/
    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(strcmp(str[j-1], str[j])>0)
            {
                strcpy(t, str[j-1]);
                strcpy(str[j-1], str[j]);
                strcpy(str[j], t);
            }
        }
    }
    /*print strings in alphabetical order*/
    printf("\nNames in Alphabetical Order : \n");
    for(i=0; i<5; i++)
    {
        puts(str[i]);
    }
    return 0;
}