#include<iostream>
#include<math.h>
using namespace std;
int jumpsearch(int a[],int key,int size)
{
  int c=1,i;
  int start=0;
  int end =ceil(sqrt(size));
  while(a[end]<=key && end<size)
  {
    start=end;
    end+=ceil(sqrt(size));
    ++c;
    if(end>size-1)
      end=size;
  }
  for(i=start;i<end;i++)
  {
     if(a[i]==key)
     {
       return c;
       break;
     }
  }
  if(a[i]!=key)
  {
    return end+1;
  }

}
int main()
{
  int t,key,size ,a[10000];
  cin>>t;
  while(t--)
  {
    cin>>size;
    int m=sqrt(size);
    for(int i=0;i<size;i++)
    cin>>a[i];
    cin>>key;
    int index=jumpsearch(a,key,size);
    if(index==m+1)
      cout<<"Not present"<<index<<endl;
    else
      cout<<"Present"<<index<<endl;
  }
}
