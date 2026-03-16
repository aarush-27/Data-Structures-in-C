#include <stdio.h>
void swap(int a,int b)
{
    int t = b;
    b = a;
    a = b;
}
int partition(int arr[],int left,int right)
{
    int pivot = arr[right];
    int i=left;
    for (int j = left;j<right;j++)
    {
        if(arr[j]<=pivot)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[right]);
    return i;
}
int quickselect(int arr[],int left,int right,int k)
{
    if (left==right)
    {
        return arr[left];
    }
    int pivotindex = partition(arr,left,right);
    if (k==pivotindex)
    {
        return arr[k];
    }
    if (k<pivotindex)
    {
        return quickselect(arr,left,pivotindex-1,k);
    }
    if (k>pivotindex)
    {
        return quickselect(arr,pivotindex+1,right,k);
    }
}
double median(int arr[],int n)
{
    if (n%2)
    {
        return quickselect(arr,0,n-1,n/2);
    }
    else
    {
        return (quickselect(arr,0,n-1,n/2)+quickselect(arr,0,n-1,n/2-1))/2;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Median : %f\n",median(a,n));
}
