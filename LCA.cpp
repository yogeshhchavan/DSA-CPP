#include <iostream>
using namespace std;

// Definition of Binary Tree Node
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

TreeNode* ans = NULL;

// Helper function
int fun(TreeNode* node, TreeNode* p, TreeNode* q) {

    if (node == NULL)
        return 0;

    // Search in left subtree
    int left = fun(node->left, p, q);

    // Search in right subtree
    int right = fun(node->right, p, q);

    // Check current node
    int self = 0;

    if (node == p || node == q)
        self = 1;

    int total = left + self + right;

    // First node containing both p and q is LCA
    if (total >= 2 && ans == NULL)
        ans = node;

    return total;
}

TreeNode* lowestCommonAncestor(TreeNode* root,
                               TreeNode* p,
                               TreeNode* q) {

    ans = NULL;

    fun(root, p, q);

    return ans;
}

int main() {

    /*
                  3
                /   \
               5     1
              / \   / \
             6   2 0   8
                / \
               7   4
    */

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(5);
    root->right = new TreeNode(1);

    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);

    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    // p = 5
    TreeNode* p = root->left;

    // q = 1
    TreeNode* q = root->right;

    TreeNode* result = lowestCommonAncestor(root, p, q);

    if (result != NULL)
        cout << "Lowest Common Ancestor = "
             << result->val << endl;
    else
        cout << "LCA not found" << endl;

    return 0;
}


// =============================================================
//                         OUTPUT
// =============================================================
//             Lowest Common Ancestor = 3
// =============================================================
