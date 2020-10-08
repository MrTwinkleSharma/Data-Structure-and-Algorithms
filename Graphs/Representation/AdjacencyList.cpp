#include <iostream>
using namespace std;
/*
Adjacency List Representation 
We can use linked list or STL list for its representation
In this the left side vertices like 0 first indicates that it is connected with other like 1, 2, 3 on right
Considering 4 Vertices 

0 --> 1 -> 2 -> 3
1 --> 2 -> 0 
2 --> 1 ->0
3 --> 0

*/

//Structure for ListNode
struct ListNode{
	int vertex_num;
	int *next;
}

//Structure for Graph
struct AdjacencyListRepresentation{
	int N_nodes,N_edges;
	struct ListNode *adjList;
}

define GRAPH struct AdjacencyListRepresentation

int main()
{

return 0;
}
