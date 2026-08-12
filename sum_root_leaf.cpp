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

int res = 0;

void fun(TreeNode* root, int sum) {

    if (root == NULL)
        return;

    sum = sum * 10 + root->val;

    // If current node is leaf
    if (root->left == NULL && root->right == NULL) {
        res = res + sum;
        return;
    }

    fun(root->left, sum);
    fun(root->right, sum);
}

int sumNumbers(TreeNode* root) {

    res = 0;

    fun(root, 0);

    return res;
}

int main() {

    /*
            4
           / \
          9   0
         / \
        5   1
    */

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(4);

    int answer = sumNumbers(root);

    cout << "Sum of Root to Leaf Numbers = " << answer << endl;

    return 0;
}

// =====================================================================
//                       OUTPUT
// =====================================================================

//             Sum of Root to Leaf Numbers = 262

// =====================================================================
