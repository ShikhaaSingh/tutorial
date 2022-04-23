#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
   int temp=*a;
   *a=*b;
   *b=temp;
}
int partition(int arr[],int l,int r,int *c,int *s)
{
   int pivot=arr[r];
   int i=l-1;
   for(int j=l;j<=r-1;j++)
   {
     (*c)++;
     if(arr[j]<pivot)
     {
       i++;
       swap(&arr[i],&arr[j]);
       (*s)++;

     }

   }
   swap(&arr[i+1],&arr[r]);
   (*s)++;
   return i+1;

}
void quick_sort(int arr[],int l,int r,int *c,int *s)
{
  if(l<r)
  {
    int p=partition(arr,l,r,c,s);
    quick_sort(arr,l,p-1,c,s);
    quick_sort(arr,p+1,r,c,s);
  }
}
int main()
{
   int t,s,c;
   cin>>t;
   while(t--)
   {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
     }
     s=0;c=0;
     quick_sort(arr,0,n-1,&c,&s);
     for(int i=0;i<n;i++)
     {
       cout<<arr[i]<<" ";

     }
     cout<<"\ncomparisons="<<c;
     cout<<"\nswaps="<<s;

   }
   return 0;
}

