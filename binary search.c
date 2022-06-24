#include<stdio.h>
int main()
{
    printf("risha\n");
    int a[20],i,n,loc,item;
    int bsearch(int[],int,int);
    printf("enter number of sorted elements(<=20)=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element a[%d]--",i);
        scanf("%d",&a[i]);
    }
    printf("enter item to search=");
    scanf("%d",&item);
    loc=bsearch(a,n,item);
    if(loc== -1)
    printf("item does not exist in array");
    else
    printf("item\t%d\t exist at index=%d",item, loc);
    return 0;
}
int bsearch(int a[],int n,int item)
{
    int loc= -1,beg=0, end=n-1,mid;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            loc=mid;
            break;
        }
        else if(item>a[mid])
        beg=mid+1;
        else
        end=mid-1;
    }
    return(loc);
}
