//The Crucial Step of this type of sorting Heap Sort
#include<iostream>
#include<vector>

using namespace std;
vector< pair<int, int> > swaps;
void minHeapify(int *arr, int node_index, int last_index)
{
	int temp;    						//Later we'll use this for swapping
	temp = arr[node_index];  			        //Storing the node value 
	int child = 2*node_index + 1;   		        //considering 0 based indexing and left child just to save memory of a block
	
	while(child < last_index)   		        	//Iterating till we checks last_index - 1 th node
	{
		if(arr[child] > arr[child+1])  		        //It Means we still have a right child less than left child
		child = child +1;			        //Go ahead proccesing with that child
		
		if (temp < arr[child]) 				//Means it is already MinHeap according to this given node_index
		break;
		
		else if (temp >= arr[child])    		//Node is greator than child
		{
			arr[node_index] = arr[child];  		//Swap it
			
			swaps.push_back(make_pair(node_index, child)); 
			
			child = child*2;			//Incrementing child index for next iteration
		}
	}
	//After all iterations store the value of temp into the latest node where conditons breaks
	arr[child/2] = temp;
	return;
}

int main()
{
	
	//Taking Input of n element array
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];

  	//Heapifying them
  	for(int i = n/2;i>=0;i++)
	minHeapify(arr,i,n);   //i is the node down which heapify process will be done
	  
  	//Printing array after Heapify
  	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
  
  	//Printing Swaps needed to be done 
  	cout <<"Number of Swaps "<< swaps.size() << "\n";
  	for (int i = 0; i < swaps.size(); ++i) 
    	cout << swaps[i].first << " " << swaps[i].second << "\n";
		
	return 0;
}
