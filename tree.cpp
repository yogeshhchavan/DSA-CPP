// Building Binary Tree........

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    

    //constructor
    Node(int val){
        data = val;
        left = right = NULL;
    }

};
static int idx = -1;
Node* buildTree(vector<int> preorder){  // recursive function to build tree
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }
    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder); //left
    root->right = buildTree(preorder); //right
    return root;
}

//preOrder traversal

void preOrder(Node* root){
    if(root ==NULL){
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

//InOrder traversal
void inOrder(Node*root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<< root->data <<" ";
    inOrder(root->right);
}

//postOrder traversal
void postOrder(Node* root){
    if(root == NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


// Level Order Traversal
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    

    while(q.size()>0){
        Node* curr = q.front();
        q.pop();

        if(curr == NULL){
            if(!q.empty()){
                cout<<endl;
                q.push(NULL);
                continue;
            }
            else{
                break;
            }
        }

        cout<<curr->data<<" ";
       
        if(curr->left){
            q.push(curr->left);
        }
        if(curr->right){
            q.push(curr->right);
        }
    }
    cout<<endl;
}


int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
        
    Node* root = buildTree(preorder);
    // cout << root->data << endl;
    // cout << root->left->data << endl;
    // cout << root->right->data << endl; 
    cout<<"preOrder traversal"<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"inOrder traversal"<<endl;
    inOrder(root);
    cout<<endl;
    cout<<"postOrder traversal"<<endl;
    postOrder(root);
    cout<<endl;
    cout<<"levelOrder traversal"<<endl;
    levelOrder(root);
    return 0;
}


// ==================================================================================================
//                       OUTPUT
// ==================================================================================================
//                 preOrder traversal
//                 1 2 3 4 5 
//                 inOrder traversal
//                 2 1 4 3 5 
//                 postOrder traversal
//                 2 4 5 3 1 
//                 levelOrder traversal
//                 1 
//                 2 3 
//                 4 5 
// ==================================================================================================




