#include <iostream>
#include <vector>
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

vector<vector<int>> ans;

void fun(TreeNode* root, int sum, int target, vector<int>& path) {

    if (root == NULL)
        return;

    sum += root->val;
    path.push_back(root->val);

    if (root->left == NULL && root->right == NULL) {

        if (sum == target)
            ans.push_back(path);
    }

    fun(root->left, sum, target, path);
    fun(root->right, sum, target, path);

    path.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int target) {

    vector<int> path;

    fun(root, 0, target, path);

    return ans;
}

int main() {

    /*
                5
              /   \
             4     8
            /     / \
           11    13  4
          / \       / \
         7   2     5   1
    */

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    int target = 22;

    vector<vector<int>> result = pathSum(root, target);

    cout << "Paths are:" << endl;

    for (auto path : result) {

        for (int value : path)
            cout << value << " ";

        cout << endl;
    }

    return 0;
}


// ===================================================================
//                               OUTPUT

// ====================================================================
                  
//                           Paths are:
//                           5 4 11 2 
//                           5 8 4 5 


// ====================================================================
