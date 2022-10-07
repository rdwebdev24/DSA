#include<iostream>
using namespace std;
#include <queue>
#include "file.h"
#include "BinaryTreeFunction.h"


int main(){
     // 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
     // BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
     // BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

     // root->left = node1;
     // root->right = node2;

     // root = takeInput();
     root = takeInputLevelWise();
     int nodes = CountNode(root);
     printTree(root);
     cout<<endl;
     cout<<"The number of nodes is : "<<nodes<<endl;
     cout<<"Inorder traversal is : "<<endl;
     inorderTraversal(root);
     
return 0;
}