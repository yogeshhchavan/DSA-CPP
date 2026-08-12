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

bool res = false;

void fun(TreeNode* root, int sum, int target) {

    if (root == NULL)
        return;

    sum = sum + root->val;

    // Check leaf node
    if (root->left == NULL && root->right == NULL) {

        if (sum == target)
            res = true;

        return;
    }

    fun(root->left, sum, target);
    fun(root->right, sum, target);
}

bool hasPathSum(TreeNode* root, int targetSum) {

    res = false;

    fun(root, 0, targetSum);

    return res;
}

int main() {

    /*
                  5
                 / \
                4   8
               /   / \
              11  13  4
             /  \      \
            7    2      1
    */

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);

    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->right->right->right = new TreeNode(1);

    int targetSum = 22;

    if (hasPathSum(root, targetSum))
        cout << "Path Sum Exists" << endl;
    else
        cout << "Path Sum Does Not Exist" << endl;

    return 0;
}

// =======================================================
//                   OUTPUT
// =======================================================

//                 Path Sum Exists
// =======================================================
