#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    int n;
    scanf("%d ",n);
    for(int i=0;i<n;i++)
    {
        char op[10];
        scanf("%s ",op);
        if(strcmp(op,"push")==0)
        {
            count++;
        }
        else if(strcopm(op,"pop")==0)
        {
            if(count==0)
            {
                printf("UNDERFLOW");
                return 0;
            }
            count--;
        }
    }
}
