#include<stdio.h>
#include<stdlib.h>

void selection_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


int main()
{
    int i,n;
    printf("\n enter size of array");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter element %d : ",i);
        scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("\n sorted array \n" );
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;

}

