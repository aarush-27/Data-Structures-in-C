#include <stdio.h>

int strlen(char *s)
{
    int n;
    for (n=0;*s!='\0';s++); // *s is the pointer to first character in string since it is an array
    return n;
}

int main()
{

}