#include<iostream>
#include<queue>
using namespace std;

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
   cin>>arr[i];
   priority_queue<int>p;
   int k;
   cin>>k;
   for(int i=0;i<k;i++)
   {
     p.push(arr[i]);
   }
   for(int i=k;i<n;i++)
   {
     if(arr[i]<p.top())
     {
       p.pop();
       p.push(arr[i]);
     }

   }
    cout<<p.top()<<endl;
  }
  return 0;
}
