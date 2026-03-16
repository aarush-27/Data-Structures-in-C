#include <stdio.h>
listoff(int range[],int sub[],int n)
{
    int mult[20];
    mult[n-1] = 1;
    for (int i=n-2;i>=0;i++)
    {
        mult[i] = mult[i+1]*range[i+1];
    }
    int k=n;
    for (int i=0;i<n;i++)
    {
        if(sub[k]<0 || sub[k]>=range[k])
        {
            k=i;
            break;
        }
    }
    int base = 0;
    for(int i=0; i<k;i++)
    {
        base = base + sub[i]*mult[i];
    }
    for(int i=k;i<n;i++)
    {
        printf("%d ",base+i);
    }
    printf("\n");
}
int main()
{

}