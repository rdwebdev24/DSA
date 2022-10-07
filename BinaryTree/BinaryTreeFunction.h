

void printTree(BinaryTreeNode<int>* root){
     if(root==NULL){
          return;
     }

     cout<<root->data<<":";
     if(root->left != NULL){
          cout<<"L:"<<root->left->data<<" ";
     }
     if(root->right != NULL){
          cout<<"R:"<<root->right->data<<" ";
     }
     cout<<endl;
     printTree(root->left);
     printTree(root->right);
}



BinaryTreeNode<int>* takeInput(){
     int rootData;
     cout<<"Enter Data : "<<endl;
     cin>>rootData;
     if(rootData==0){
          return NULL;
     }
     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
     BinaryTreeNode<int>* leftChild = takeInput();
     BinaryTreeNode<int>* RightChild = takeInput();
     root->left = leftChild;
     root->right = RightChild;
     return root;

}


// take input level wise //
BinaryTreeNode<int>* takeInputLevelWise(){
     int rootData;
     cout<<"Enter root data "<<endl;
     cin>>rootData;
     if(rootData == -1){
          return NULL;
     }
     BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
     queue<BinaryTreeNode<int>*> pendingNode;
     pendingNode.push(root);
     while (pendingNode.size()!=0)
     {
          BinaryTreeNode<int>* front = pendingNode.front();
          pendingNode.pop();
          cout<<"Enter left child of "<<front->data<<endl;
          int leftChildData;
          cin>>leftChildData;
          if(leftChildData != -1){
               BinaryTreeNode<int>* leftchild = new BinaryTreeNode<int>(leftChildData);
               front->left = leftchild;
               pendingNode.push(leftchild);
          }

          cout<<"Enter right child of "<<front->data<<endl;
          int rightChildData;
          cin>>rightChildData;
          if(rightChildData != -1){
               BinaryTreeNode<int>* rightchild = new BinaryTreeNode<int>(rightChildData);
               front->right = rightchild;
               pendingNode.push(rightchild);
          }
     }
     return root;
}

// print data level wise //
void printDataLevelWise(BinaryTreeNode<int>* root){

}

// counting the nodes //
int CountNode(BinaryTreeNode<int>* root){
     if(root==NULL){
          return 0;
     }
     return 1 + CountNode(root->left) + CountNode(root->right);
}


// inorder traversal //

void inorderTraversal(BinaryTreeNode<int>* root){
     if(root == NULL){
          return;
     }
     inorderTraversal(root->left);
     cout<<root->data<<" ";
     inorderTraversal(root->right);
}