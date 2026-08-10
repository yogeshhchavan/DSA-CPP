#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* searchBST(TreeNode* root, int val) {

    if (root == NULL)
        return NULL;

    if (root->val == val)
        return root;

    if (val < root->val)
        return searchBST(root->left, val);

    return searchBST(root->right, val);
}

void inorder(TreeNode* root) {

    if (root == NULL)
        return;

    inorder(root->left);

    cout << root->val << " ";

    inorder(root->right);
}

int main() {

    /*
            4
           / \
          2   7
         / \
        1   3
    */

    TreeNode* root = new TreeNode(4);

    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int val;

    cout << "Enter value to search: ";
    cin >> val;

    TreeNode* result = searchBST(root, val);

    if (result == NULL) {
        cout << "Value not found in BST" << endl;
    }
    else {
        cout << "Value found" << endl;

        cout << "Subtree rooted at " << result->val << ": ";

        inorder(result);

        cout << endl;
    }

    return 0;
// }

// =====================================================================
//                                 OUTPUT
// =====================================================================
//                     Enter value to search: 3
//                     Value found
//                     Subtree rooted at 3: 3 
                    
//                     Enter value to search: 9
//                     Value not found in BST
// =====================================================================
