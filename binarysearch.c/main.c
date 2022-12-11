#include<stdio.h>
int main()
{
    int a[50],key,i,n,low,high,mid,found=0;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN THE ARRAY:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE KEY TO BE SEARCHED:\n");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            printf("%d is present at the position=%d",key,mid+1);
            found=1;
            break;
        }
        if(a[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    if(!found)
        printf("key not found");
    return 0;
}
