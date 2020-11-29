#include<iostream>
#include<list>
#include<queue>
using namespace std;
//There is only one algorthim that's why no problem in declaring globally 
list<int> *adj_list_graph;

//Function to add edge in Graph according to Input
void addEdge(int u, int v)
{
    adj_list_graph[u].push_back(v);
    
    // Considering Graph is Undirected
    adj_list_graph[v].push_back(u);
}
	
int main ()
{
	//Taking Graph as Input in Adjacency List 
	//Pointer to an array 
	//list<int> *adj_list_graph;
	cout<<"Enter Number of Edges and Vertices\n";
	int E,V;
	cin>>E>>V;
	
	adj_list_graph = new list<int>[V];  //Creating a new array dynamically and storing it's base address to adj_list_graph
	
	cout<<"Enter Edges (u v)\n";
	for(int i=0,u,v;i<E;i++){
	
	cin>>u>>v;
	addEdge(u,v);
	}
	
	//Input Done
	
	bool *visited;   //Creating a pointer to boolean array 
	visited = new bool[V]; //Storing address of array of length V in visited
	
	// Set False for all Vertices initially
	for(int i=0;i<V;i++)
	visited[i] = false;
	
	std::queue<int>vertices_queue;  //Creating a queue to enqueue a node after discovery and dequeue for processing
	std::vector<int>answer;         //To Store the traversal path or can say traversal order

	//Let say we are starting our BFS from 0th vertex
	//So Push 0 in queue for getting discovered and also in answer and set to visited = true also
	visited[0] = true;
	
	answer.push_back(0);
	vertices_queue.push(0);
	list<int>::iterator i;
	// Breadth First Search Algorithm
	while(!vertices_queue.empty())
	{
		int current_vertex = vertices_queue.front();
		
		//Discovering this current_vertex 
		
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{
		    //if the adjacent vertex to the current_vertex is not visited 
		    //then set it visited also enqueue for next time processing
		    if(!visited[*i])
		    {
		        visited[*i] = true;
		        vertices_queue.push(*i);
		    }
		    
		}
		
	}	
	return 0;
	
}
