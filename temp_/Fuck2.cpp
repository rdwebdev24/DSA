#include <iostream>
#include <queue>
#include <stack>
#include "Fuck.h";
using namespace std;

void print_tree(treeNode<int> *root)
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
          print_tree(root->children[i]);
     }
}

treeNode<int> *takeInput()
{
     int rdata;
     cout << "Enter root data : ";
     cin >> rdata;
     treeNode<int> *root = new treeNode<int>(rdata);
     int n;
     cout << "number of children of root : ";
     cin >> n;

     for (int i = 0; i < n; i++)
     {
          treeNode<int> *child = takeInput();
          root->children.push_back(child);
     }
     return root;
}

treeNode<int> *takeInput_levelWise()
{
     int rootdata;
     cout << "Enter the root data : " << endl;
     ;
     cin >> rootdata;
     treeNode<int> *root = new treeNode<int>(rootdata);

     queue<treeNode<int> *> pendingNode;
     pendingNode.push(root);

     while (!pendingNode.empty())
     {
          treeNode<int> *front = pendingNode.front();
          pendingNode.pop();

          int num;
          cout << "Enter the num of children of " << front->data << " : " << endl;
          cin >> num;

          for (int i = 0; i < num; i++)
          {
               int childData;
               cout << "enter " << (i + 1) << "th children : " << endl;
               cin >> childData;
               treeNode<int> *child = new treeNode<int>(childData);
               front->children.push_back(child);
               pendingNode.push(child);
          }
     }
     return root;
}

void print_level_wise(treeNode<int> *root)
{
     queue<treeNode<int> *> q;
     q.push(root);

     while (!q.empty())
     {
          treeNode<int> *front = q.front();
          q.pop();
          cout << front->data << " : ";
          for (int i = 0; i < front->children.size(); i++)
          {
               cout << front->children[i]->data << ",";
               q.push(front->children[i]);
          }
          cout << endl;
     }
}

int cnt_nodes(treeNode<int> *root)
{
     int cnt = 1;
     for (int i = 0; i < root->children.size(); i++)
     {
          cnt += cnt_nodes(root->children[i]);
     }
     return cnt;
}

int height_of_tree(treeNode<int> *root)
{
     int height = 0;
     int maxHeight = 0;
     for (int i = 0; i < root->children.size(); i++)
     {
          height += height_of_tree(root->children[i]);
          maxHeight = max(height, maxHeight);
          height = 0;
     }
     return maxHeight + 1;
}

void print_node_at_dept_k(treeNode<int> *root, int k)
{
     if (root == NULL)
     {
          return;
     }
     if (k == 0)
     {
          cout << root->data << ",";
          return;
     }
     for (int i = 0; i < root->children.size(); i++)
     {
          print_node_at_dept_k(root->children[i], k - 1);
     }
}

int no_of_leaf_nodes(treeNode<int> *root)
{

     if (root->children.size() == 0)
     {
          return 1;
     }
     int leaf = 0;
     for (int i = 0; i < root->children.size(); i++)
     {
          leaf += no_of_leaf_nodes(root->children[i]);
     }
     return leaf;
}

void preOrderTraversal(treeNode<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << " ";
     for (int i = 0; i < root->children.size(); i++)
     {
          preOrderTraversal(root->children[i]);
     }
}
void postOrderTraversal(treeNode<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     for (int i = 0; i < root->children.size(); i++)
     {
          postOrderTraversal(root->children[i]);
     }
     cout << root->data << " ";
}
void postOrderDelete(treeNode<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     for (int i = 0; i < root->children.size(); i++)
     {
          postOrderDelete(root->children[i]);
     }
     delete root;
}

void print_binary_tree(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << ":";

     if (root->left != NULL)
     {
          cout << "L" << root->left->data;
     }
     if (root->right != NULL)
     {
          cout << "R" << root->right->data;
     }
     cout << endl;
     print_binary_tree(root->left);
     print_binary_tree(root->right);
}

binaryTree<int> *takeInput_binary()
{

     int rootdata;
     cout << "enter root data : ";
     cin >> rootdata;
     if (rootdata == -1)
     {
          return NULL;
     }
     binaryTree<int> *root = new binaryTree<int>(rootdata);
     binaryTree<int> *left = takeInput_binary();
     binaryTree<int> *right = takeInput_binary();

     root->left = left;
     root->right = right;

     return root;
}

binaryTree<int> *takeInput_binary_levelWise()
{
     int rootdata;
     cout << "enter root data : ";
     cin >> rootdata;
     if (rootdata == -1)
     {
          return NULL;
     }
     binaryTree<int> *root = new binaryTree<int>(rootdata);

     queue<binaryTree<int> *> pendingNodes;
     pendingNodes.push(root);

     while (!pendingNodes.empty())
     {
          binaryTree<int> *front = pendingNodes.front();
          pendingNodes.pop();
          cout << "Enter left child of : " << front->data << " : ";
          int leftchild;
          cin >> leftchild;
          if (leftchild != -1)
          {
               binaryTree<int> *child = new binaryTree<int>(leftchild);
               front->left = child;
               pendingNodes.push(child);
          }
          cout << "Enter right child of : " << front->data << " : ";
          int rightchild;
          cin >> rightchild;
          if (rightchild != -1)
          {
               binaryTree<int> *child = new binaryTree<int>(rightchild);
               front->right = child;
               pendingNodes.push(child);
          }
     }
     return root;
}

void print_binary_levelwise(binaryTree<int> *root)
{

     queue<binaryTree<int> *> pendingNodes;
     pendingNodes.push(root);

     while (!pendingNodes.empty())
     {
          binaryTree<int> *front = pendingNodes.front();
          pendingNodes.pop();
          cout << front->data << ":"
               << "L" << front->left->data << "R" << front->right->data << endl;
          if (front->left and front->right)
          {
               pendingNodes.push(front->left);
               pendingNodes.push(front->right);
          }
     }
}

int binary_tree_nodes(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return 0;
     }
     return 1 + binary_tree_nodes(root->left) + binary_tree_nodes(root->right);
}

void inorder_traversal(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     inorder_traversal(root->left);
     cout << root->data << " ";
     inorder_traversal(root->right);
}

binaryTree<int> *build_tree_helper(int *in, int *pre, int inS, int inE, int preS, int preE)
{
     if (inS > inE)
     {
          return NULL;
     }
     int rootdata = pre[preS];
     int rootIndex = -1;
     for (int i = inS; i <= inE; i++)
     {
          if (in[i] == rootdata)
          {
               rootIndex = i;
               break;
          }
     }
     int linS = inS;
     int linE = rootIndex - 1;
     int lpreS = preS + 1;
     int lpreE = linE - linS + lpreS;
     int rpreS = lpreE + 1;
     int rpreE = preE;
     int rinS = rootIndex + 1;
     int rinE = inE;

     binaryTree<int> *root = new binaryTree<int>(rootdata);
     root->left = build_tree_helper(in, pre, linS, linE, lpreS, lpreE);
     root->right = build_tree_helper(in, pre, rinS, rinE, rpreS, rpreE);
     return root;
}

binaryTree<int> *build_tree(int *in, int *pre, int size)
{
     return build_tree_helper(in, pre, 0, size - 1, 0, size - 1);
}

void inorderTraversal2(binaryTree<int> *root, vector<int> &arr, int k)
{
     if (root == NULL)
     {
          return;
     }
     if (k == 1)
     {
          inorderTraversal2(root->left, arr, k);
          arr.push_back(root->data);
          inorderTraversal2(root->right, arr, k);
     }
     else if (k == 2)
     {
          arr.push_back(root->data);
          inorderTraversal2(root->left, arr, k);
          inorderTraversal2(root->right, arr, k);
     }
     else if (k == 3)
     {
          inorderTraversal2(root->left, arr, k);
          inorderTraversal2(root->right, arr, k);
          arr.push_back(root->data);
     }
     else
     {
          cout << "invalid input" << endl;
          return;
     }
}

vector<int> inorderTraversal(binaryTree<int> *root, int k)
{
     vector<int> arr;
     inorderTraversal2(root, arr, k);
     return arr;
}

void postorder_iterative(binaryTree<int> *root)
{

     stack<binaryTree<int> *> s;

     while (root or !s.empty())
     {
          if (root)
          {
               if (root->right)
               {
                    s.push(root->right);
               }
               if (root->left)
               {
                    root = root->left;
               }
               else
               {
                    cout << root->data;
                    root = root->left;
               }
          }
          else
          {
               root = s.top();
               s.pop();
          }
     }
}

int minDepth(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return 0;
     }
     int right = 1 + minDepth(root->right);
     int left = 1 + minDepth(root->left);

     if (left == 1 and right != 1)
     {
          left = INT_MAX;
     }
     if (right == 1 and left != 1)
     {
          right = INT_MAX;
     }

     return min(left, right);
}

pair<int, int> balanced_tree_helper(binaryTree<int> *root)
{
     if (root == NULL)
     {
          pair<int, int> p = {0, 0};
          return p;
     }

     int right = 1 + balanced_tree_helper(root->right).second;
     int left = 1 + balanced_tree_helper(root->left).first;
     pair<int, int> p = {left, right};

     return p;
}

bool balancedTree(binaryTree<int> *root)
{
     pair<int, int> p = balanced_tree_helper(root);
     cout << "pair : " << endl;
     cout << p.first << p.second << endl;
     int diff = abs(p.first - p.second);
     if (diff > 1)
     {
          return false;
     }
     return true;
}

void INORDER(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     INORDER(root->left);
     cout << root->data << " ";
     INORDER(root->right);
}
void PREORDER(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     cout << root->data << " ";
     PREORDER(root->left);
     PREORDER(root->right);
}
void POSTORDER(binaryTree<int> *root)
{
     if (root == NULL)
     {
          return;
     }
     POSTORDER(root->left);
     POSTORDER(root->right);
     cout << root->data << " ";
}
void LEVELORDER(binaryTree<int> *root)
{
     queue<binaryTree<int> *> q;
     q.push(root);
     cout << root->data << " ";
     while (!q.empty())
     {
          binaryTree<int> *front = q.front();
          q.pop();
          if (front->left and front->right)
          {
               cout << front->left->data << " " << front->right->data << " ";
               q.push(front->left);
               q.push(front->right);
          }
     }
     return;
}


bool help(binaryTree<int>* root){
     vector<binaryTree<int>*> arr;
     // symmetric(root,arr);
     for(auto i:arr){
          cout<<i->data<<" ";
     }
     cout<<endl;
     arr.pop_back();
     stack<int> s;
     for(int i=0; i<arr.size(); i++){
          if(i<arr.size()/2){
               s.push(arr[i]->data);
          }
          else{
               if(s.top()!=arr[i]->data){
                    return false;
               }
               s.pop();
          }
     }
     return true;
}

vector<binaryTree<int>*> symmetric(binaryTree<int> *root,vector<binaryTree<int>*> &arr)
{
          if (root == NULL)
          {
               vector<binaryTree<int>*> arr;
               return arr;
          }
          symmetric(root->left,arr);
          symmetric(root->right,arr);
          arr.push_back(root);
          return arr;
}


int main()
{
     system("cls");

     binaryTree<int> *root = takeInput_binary_levelWise();
     cout<<endl;
     print_binary_tree(root);
     cout<<"IN : ";INORDER(root);
     cout<<endl;
     cout<<"PRE : ";PREORDER(root);
     cout<<endl;
     cout<<"POST : ";POSTORDER(root);
     cout<<endl;
     cout<<"LEVEL : ";LEVELORDER(root);
     cout<<endl;

     vector<binaryTree<int>*> arr;
     symmetric(root,arr);

     for(auto i:arr){
          cout<<i->data<<" ";
     }

     delete root;

     return 0;
}

// 1 2 2 3 4 4 3 -1 -1 -1 -1 -1 -1 -1 -1