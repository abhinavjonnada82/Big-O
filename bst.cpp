
#include <iostream>
#include "bst.hpp"

using namespace std;


   
void BST::add (int d)
{
   Node *ptr = new Node(d);
   root = add(root, ptr);
}

Node *BST::add (Node *nroot, Node *ptr)
{
   if (nroot == NULL)
      nroot = ptr;
   else 
      if (ptr->data < nroot->data)
      {
        nroot->left = add(nroot->left, ptr);
         
      }
      else 
      {
        nroot->right = add (nroot->right, ptr);
         
      }
   return nroot;
}

void BST::in_order (Node *nroot)
{
   if (nroot != NULL)
   {
      in_order(nroot->left);
      cout << nroot-> data << endl;
      in_order(nroot->right);
   }
}

void BST::in_order(void)
{
   in_order(root);
}


