#include<iostream>
#include<stdio.h>   //Because of NULL
using namespace std; 
struct Node{
int data;
struct Node *next;
};

struct Node* createNode (){
/* DOCSTRING: - whenever this function will be called it will create a Node and give you the 
   Address of that node */

struct Node* temp;     				   //here we're creating a temporary node 
temp = (struct Node *)malloc(sizeof(struct Node);  //here we've assigned the address of block which was created by malloc
						   // in a temporary node 
return temp;				 	   // and simply returned it...
}

int main () {
struct Node *head = NULL;

return 0;
}
