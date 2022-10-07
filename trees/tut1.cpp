#include <iostream>
#include <queue>
#include <vector>
#include "file1.h"
#include "tree_function.h"
using namespace std;


int main()
{
     TreeNode<int> *root = new TreeNode<int>(1);
     TreeNode<int> *node1 = new TreeNode<int>(2);
     TreeNode<int> *node1a = new TreeNode<int>(4);
     TreeNode<int> *node1b = new TreeNode<int>(5);
     TreeNode<int> *node1c = new TreeNode<int>(6);
     TreeNode<int> *node2 = new TreeNode<int>(3);
     TreeNode<int> *node2a = new TreeNode<int>(7);
     TreeNode<int> *node2b = new TreeNode<int>(8);
     root->children.push_back(node1);
     root->children.push_back(node2);
     node1->children.push_back(node1a);
     node1->children.push_back(node1b);
     node1->children.push_back(node1c);
     node2->children.push_back(node2a);
     node2->children.push_back(node2b);

     //                           root
     //                      _______|_____________
     //                      |                   |
     //                      node1              node2
     //          _____________|________     _______|______
     //          |         |          |     |             |
     //        node1a    node1b     node1c  node2a       node2b

     // TreeNode<int>*root = takeInput();


     // TreeNode<int>*root = takeInputlevelWise();
     cout<<"The tree is : "<<endl;
     // printTree(root);
     // PrintTreeNew(root);
     // preOrder(root);
     PostOrder(root);
     delete root;
     // cout<<"Deleting the node"<<endl;
     // DeleteTree(root);
     // cout<<endl;

     // no. of nodes
     cout<<"The number of nodes is : "<<count(root)<<endl;

     // height of tree
     cout<<"The height of the tree is : "<<height(root)<<endl;

     //  depth of tree
     cout<<"Enter the depth : "<<endl;
     int d;
     cin>>d;
     cout<<"The element at depth "<<d<<" is : ";
     NodeAtDepth(root , d);
     cout<<endl;
    
     // printing the number of leaf nodes
     int leaf;
     leaf = PrintLeadNodes(root);
     cout<<"The number of leaf nodes is : "<<leaf<<endl;

     return 0;
}