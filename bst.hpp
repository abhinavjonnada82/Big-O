#include <iostream>

using namespace std;


class Node
{
public:
   int data;
   Node *left, *right;
   
   Node () {data = 0; left = right = NULL; }
   Node(int d) {data = d; left = right = NULL; }
};

class BST
{
   Node *root;
   Node *add (Node *nroot, Node *add_node);
 public:
   BST() {root = NULL;}
   void add (int d);
   void in_order(void);
   void in_order (Node *);
};
