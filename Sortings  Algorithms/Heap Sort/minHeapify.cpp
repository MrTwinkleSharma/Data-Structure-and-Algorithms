//The Crucial Step of this type of sorting Heap Sort
#include<iostream>
using namespace std;

int main()
{
  vector< pair<int, int> > swaps;
  //Taking Input of n element array
  int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
  
  //Heapifying them
  
  
  
  
  //Printing array after Heapify
  for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
  
  //Printing Swaps needed to be done 
  cout <<"Number of Swaps "<< swaps_.size() << "\n";
  for (int i = 0; i < swaps_.size(); ++i) {
    cout << swaps_[i].first << " " << swaps_[i].second << "\n";
  }

}
