#include<iostream>
using namespace std;

void Merge_Sort(int arr[],int l,int m,int r,int *c,int *s)
{
   int n1=(m-l+1);
   int n2=(r-m);

   int L[n1],R[n2];
   for(int i=0;i<n1;i++)
   {
     L[i]=arr[l+1];
   }
   for(int j=0;j<n2;j++)
   {
     R[j]=arr[m+1+j];
   }
    int i=0,j=0,k=1;

    while(i<n1 &&j<n2)
    {
      (*c)++;
      if(L[i]<=R[j])
      {
         arr[k++]=L[i++];
         (*s)++;
      }
      else
      {
        arr[k++]=R[j++];
        (*s)++;
      }
    }
    while(i<n1)
    {
      arr[k++]=L[i++];
      (*s)++;

    }
    while(j<n2)
    {
      arr[k++]=R[j++];
      (*s)++;

    }
}
void Merge(int arr[],int l,int r,int *c,int *s)
{
   int mid;
   if(l<r)
   {
       mid=(l+r)/2;
       Merge(arr,l,mid,c,s);
       Merge(arr,mid+1,r,c,s);
       Merge_Sort(arr,l,mid,r,c,s);

   }
}
int main()
{
    int t;
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
       int c=0,s=0;
       Merge(arr,0,n-1,&c,&s);
       for(int i=0;i<n;i++)
       {
          cout<<arr[i]<<" ";

       }
        cout<<"\nComparisons="<<c;
        cout<<"\ninversions="<<s;

    }
     return 0;
}


