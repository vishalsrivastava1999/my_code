#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
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
    bubble_sort(a,n);
    printf("\n sorted array \n" );
    for(i=0;i<n;i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;

}
