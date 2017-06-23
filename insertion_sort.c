#include<stdio.h>

void ins(int a[],int n)
{
  int i,j,key;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
    for (i=0; i < n; i++)
       printf("%d ", a[i]);
   printf("\n");
}
  void main()
{
  int arr[10],i,j,key,n;
  printf("\nEnter the size:");
  scanf("%d",&n);
  printf("\nEnter the array:");
  for(i=0;i<n;++i)
    {
      scanf("%d",&arr[i]);
    }
  ins(arr,n);
}  



