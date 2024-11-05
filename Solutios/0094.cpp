#include <iostream>
#include <vector>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void traverse(TreeNode * node, vector<int> &res) {
        if (node != nullptr) {
        traverse(node->left, res);
        res.emplace_back(node->val);
        traverse(node->right, res);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        traverse(root, res);
        return res;
    }
};

int main(void) {
    TreeNode *t0 = new TreeNode(1);
    TreeNode *t1 = new TreeNode(2);
    t0->right = t1;
    Solution solution = Solution();
    vector<int> v = solution.inorderTraversal(t0);
    for (int x : v) {
        cout << x << " " ;
    }
    system("pause");
    return 0;
}