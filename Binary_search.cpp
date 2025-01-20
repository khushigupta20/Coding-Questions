#include <stdio.h>
#define size 100
int search(int a[],int n,int searchValue);
int main()
{
  int i,n,searchValue,a[size],index;
  printf("Enter the no. of elements : ");
  scanf("%d",&n);
  printf("Enter the elements : \n");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Enter the element to be searched : ");
  scanf("%d",&searchValue);
  index=search(a,n,searchValue);
  if(index==-1)
    printf("%d not found in array !\n",searchValue);
  else
    printf("%d found at index %d !\n",searchValue,index);
  return 0;
}
int search(int a[],int n,int searchValue)
{
  int first=0,last=n-1,mid,count=0;
  while(first<=last)
  {
    count =
    mid=(first+last)/2;
    if(searchValue>a[mid])
      first=mid+1;
    else if(searchValue<a[mid])
      last=mid-1;
    else
      return mid;
  }
  return -1;
}
