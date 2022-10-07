void printTree(TreeNode<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << ":";
     for (int i = 0; i < root->children.size(); i++)
     {
          cout << root->children[i]->data << ",";
     }
     cout << endl;
     for (int i = 0; i < root->children.size(); i++)
     {
          printTree(root->children[i]);
     }
}

// take input ( METHOD : 1 )
TreeNode<int>* takeInput(){
     int rootData;
     cout<<"Enter data : "<<endl;
     cin>>rootData;
     TreeNode<int>* root = new TreeNode<int>(rootData);
     int n;
     cout<<"Enter the number of child "<<root->data<<endl;
     cin>>n;
     for(int i = 0 ; i < n ; i++){
          TreeNode<int>* child = takeInput();
          root->children.push_back(child);
     }
     return root;
}

TreeNode<int> *takeInputlevelWise()
{
     int rootData;
     cout << "Enter the data " << endl;
     cin >> rootData;
     TreeNode<int> *root = new TreeNode<int>(rootData);
     queue<TreeNode<int> *> pendingNode;
     pendingNode.push(root);
     while (pendingNode.size() != 0)
     {
          TreeNode<int> *front = pendingNode.front();
          pendingNode.pop();
          cout << "Enter the number of children of " << front->data << endl;
          int numchild;
          cin >> numchild;
          for (int i = 0; i < numchild; i++)
          {
               int childData;
               cout << "Enter " << i << "th child of " << front->data << endl;
               cin >> childData;
               TreeNode<int> *child = new TreeNode<int>(childData);
               front->children.push_back(child);
               pendingNode.push(child);
          }
     }
     return root;
}

void PrintTreeNew(TreeNode<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     queue<TreeNode<int> *> pendingNode;
     pendingNode.push(root);
     while (pendingNode.size() != 0)
     {
          TreeNode<int> *front = pendingNode.front();
          pendingNode.pop();
          cout << front->data << " ";
          int numchild = front->children.size();
          for (int i = 0; i < numchild; i++)
          {
               pendingNode.push(front->children[i]);
          }
     }
     cout<<endl;
}

// counting the node //
int count(TreeNode<int> *root)
{
     // cout<<"Root children size : "<<root->children.size()<<endl;
     if (root->children.size() == 0)
     {
          return 1;
     }
     int cnt = 0;
     for (int i = 0; i < root->children.size(); i++)
     {
          cnt += count(root->children[i]);
     }
     return cnt + 1;
}

// finding the height of the tree
int height(TreeNode<int> *root)
{
     if(root==NULL){
          return 0;
     }
     if (root->children.size() == 0)
     {
          return 1;
     }
     int left;
     int right;
     for(int i = 0 ; i < root->children.size() ; i++){
            left = count(root->children[0]);
            right = count(root->children[1]);
     }
     if(left>right){
          return(left+1);
     }else{
          return right+1;
     }
}

// printing nodes at depth/level k
void NodeAtDepth(TreeNode<int> *root,int d)
{
     if (root->children.size() == 0 || d == 0)
     {    
          cout<<root->data<<" "<<" ";;
          return;
     }
     for(int i = 0 ; i < root->children.size(); i++){
          NodeAtDepth(root->children[i],d-1);
     }
}

// printing the leaf nodes
int PrintLeadNodes(TreeNode<int> *root){
     if(root->children.size()==0){
          return 1;
     }
     int leaf = 0;
     for(int i = 0 ; i < root->children.size() ; i++){
          leaf += PrintLeadNodes(root->children[i]);
     }

     return leaf;

}

// preorder traversing 
void preOrder(TreeNode<int> *root){
     if(root==NULL){
          return;
     }
     cout<<root->data<<" ";
     for(int i = 0 ; i < root->children.size() ; i++){
          preOrder(root->children[i]);
     }
}

// post order Traversal
void PostOrder(TreeNode<int> *root){
     if(root==NULL){
          return;
     }
     if(root->children.size()==0){
          cout<<root->data<<" ";
          return;
     }
     for(int i = 0 ; i < root->children.size(); i++){
          PostOrder(root->children[i]);
     }
     cout<<root->data<<" ";
}

// deleting using post order travesal
void DeleteTree(TreeNode<int> *root){
     for(int i = 0 ; i < root->children.size(); i++){
          DeleteTree(root->children[i]);
     }
     delete root;
}