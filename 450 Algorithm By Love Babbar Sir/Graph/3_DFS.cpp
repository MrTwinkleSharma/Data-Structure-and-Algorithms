
#include<iostream>
#include<list>
#include<stack>
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
DepthFirstSearch(int vertex, bool visited[])
{
  //Now the first vertex from where we started is visited
  visited[vertex] = true;
  cout<<vertex<<" ";
  list<int>::iterator i;
  for (i = adj[s].begin(); i != adj[s].end(); ++i) 
  {
    //if the adjacent vertex to the current_vertex is not visited 
    //then set it visited also call DFS for next time processing
    if(!visited[*i])
    DepthFirstSearch(*i,visited);
  }
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
  
  int v = 2;
  //v is the vertex from where DFS traversal will start
  DepthFirstSearch(v, visited);
  
  return 0;
}
  
  
  
  
  
  
  
