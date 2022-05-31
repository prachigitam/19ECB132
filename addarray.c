#include<stdio.h>
int main()
{
  int arr[100];
  int i,x,p,n=10;
  for(i=0;i<10;i++)
    arr[i]=i+1;
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  printf("\n");
  x=20;
  n++;
  for(i-n-1;i<n;i++)
    arr[i]=arr[i-1];
  arr[p-1]=x;
  for(i=0;i<n;i++)
    printf("%d",arr[i]);
  printf("/n");
  }