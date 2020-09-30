#include<iostream>
using namespace std;

int main()
{
  //Input for n elements's array
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  
  //Sorting Algorithm
  
  
  //Before Sorting
  cout<<"\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  
  //After Sorting
  cout<<"\n";
  for(int i=0;i<n;i++)
  cout<<arr[i]<<" ";
  
  
  return 0;
}
