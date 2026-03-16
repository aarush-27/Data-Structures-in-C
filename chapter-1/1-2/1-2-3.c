#include <stdio.h>
int main()
{
    int a[21][11]={0};
    int branch,item,sales;
    while ((scanf("%d %d %d",&branch,&item,&sales))==3)
    {
        a[branch][item] = sales;
    }
    int sumtotal=0;
    for (int i=1;i<21;i++)
    {
        int sum=0;
        printf("%d ",i);
        for (int j=1;j<11;j++)
        {
            printf("%d ",a[i][j]);
            sum = sum+a[i][j];
        }
        sumtotal = sumtotal+sum;
        printf("%d\n",sum);
    }
    printf("TOTAL ");
    // make another loop
}
