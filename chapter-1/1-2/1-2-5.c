#include <stdio.h>
void printarr(int m,int n,int arr[m][n])
{
    int i,j,i0,j0;
    for (i0=0;i0<m;i0+=50)
    {
        for (j0==0;j0<n;j0+=20)
        {
            printf("\n");
            printf("           ");
            for(j=j0; j<0+20 && j<m; j++)
            {
                printf("COL %3d ",j);
            }
            printf("\n");
            for (i=i0;i<i0+50 && i<n;i+=50)
            {
                printf("ROW %3d ",i);
                for (j = j0; j < j0 + 20 && j < n; j++)
                    printf("%7d", arr[i][j]);
                printf("\n");
            }
        }
    }
}
int main()
{
    return 0;
}