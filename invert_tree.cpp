#include <iostream>
#include <algorithm>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

TreeNode* invertTree(TreeNode* root) {
    if (root == nullptr)
        return nullptr;

    swap(root->left, root->right);

    invertTree(root->left);
    invertTree(root->right);

    return root;
}

void inorder(TreeNode* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    // Creating this tree:
    //
    //       4
    //      / \
    //     2   7
    //    / \ / \
    //   1  3 6  9

    TreeNode* root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    cout << "Before inversion: ";
    inorder(root);

    invertTree(root);

    cout << "\nAfter inversion: ";
    inorder(root);

    return 0;
}


// =========================================================================
//                             OUTPUT
// =========================================================================
//                   Before inversion: 1 2 3 4 6 7 9
//                               4
//                              / \
//                             2   7
//                            / \ / \
//                           1  3 6  9

//                   After inversion: 9 7 6 4 3 2 1 
//                               4
//                              / \
//                             7   2
//                            / \ / \
//                           9  6 3  1
//   =======================================================================
  

        
