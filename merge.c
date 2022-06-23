#include<stdio.h>
int main()
{
    printf("risha\n");
    int n,i,a[20];
    int mergesort(int a[],int low,int high);
    int display(int a[],int size);
    printf("enter total number of elements in array(<20)-->");
    scanf("%d",&n);
    printf("input array elements to be sorted\n");
    for(i=0;i<n;i++)
    {
        printf("enter elements a[%d]-->",i);
        scanf("%d",&a[i]);
    }
    printf("array element before sorting are-->");
    display(a,n);
    mergesort(a,0,n-1);
    printf("\narray element after sorting are-->");
    display(a,n);
    return 0;
}
int mergesort(int a[],int low, int high)
{
    int mid;
    int merge(int a[],int low,int high,int mid);
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
int merge(int a[],int beg,int mid,int end)
{
    int tbindex,temp[20],lbindex,rbindex,i;
    lbindex=beg;
    rbindex=mid+1;
    tbindex=beg;
    while((lbindex<=mid)&&(rbindex<=end))
    {
        if(a[lbindex]<a[rbindex])
        {
            temp[tbindex]=a[lbindex];
            lbindex=lbindex+1;
        }
        else
        {
            temp[tbindex]=a[rbindex];
            rbindex=rbindex+1;
        }
        tbindex=tbindex+1;
    }
        while(lbindex<=mid)
        {
            temp[tbindex]=a[lbindex];
            lbindex=lbindex+1;
            tbindex=tbindex+1;
        }
        while(rbindex<=end)
        {
            temp[tbindex]=a[rbindex];
            rbindex=rbindex+1;
            tbindex=tbindex+1;
        }
        for(i=beg;i<=end;i++)
        a[i]=temp[i];
    }
        int display(int a[],int size)
        {
            int i;
            for(i=0;i<size;i++)
            {
                printf("%d",a[i]);
            }
        }
