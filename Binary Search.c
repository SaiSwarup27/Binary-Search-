#include <stdio.h>
int main()
{
    int arr[1000],n,s,i;
    int len,low,high,mid;
    printf("enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the array values in ascending order : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search key : ");
    scanf("%d",&s);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    while(low<=high)
    {
        if(s==arr[mid])
        {
           printf("Number found");
           break;
        }
        else if(s>arr[mid])
        {
           low=mid+1;
           mid=(low+high)/2;
        }
        else if(s<arr[mid])
        {
            high=mid-1;
            mid=(low+high)/2;
        }
    }
    if(low>high)
       printf("Number not found");

    return 0;
}

/* Binary search is an efficient algorithm for finding an item from a sorted list of items. 
It works by repeatedly dividing in half the portion of the list that could contain the item, 
until you've narrowed down the possible locations to just one. 

-> Firstly we are inputing n array elements
-> And accepting the search key
-> finding middle element in an array
-> Comparing the search key with middle element
-> If both are matched the displaying "Number Found"
-> If the search key is smaller than middle element then again finding the middle element and performing the same procedure of s-3 and s-4
-> If the search key is greater than middle element then again finding the middle element and performing the same procedure of s-3 and s-4
-> Repeat the same process until we find the search element in the list or until sublist contains only one element
-> If the element doesn't match with the search element, then displaying "Number not found"*/

