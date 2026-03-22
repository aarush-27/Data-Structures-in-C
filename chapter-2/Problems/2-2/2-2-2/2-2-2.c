#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define STACKSIZE 100
int main()
{
    int n,count = 0;
    scanf("%d",&n);
    char s[5];
    for (int i=0;i<n;i++)
    {
        scanf("%s",s);
        if(!strcmp(s,"push"))
        {
            count++;
        }
        if(!strcmp(s,"pop"))
        {
            count--;
        }
        if (count==STACKSIZE)
        {
            printf("STACK OVERFLOW");
            exit(1);
        }
        if (count==-1)
        {
            printf("STACK UNDERFLOW");
            exit(1);
        }
    }
}