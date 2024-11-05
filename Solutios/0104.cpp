#include <iostream>
// #include <cstdlib>
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
    int countDepth(TreeNode *node) {
        if (node == nullptr) return 0;
        return 1 + max(countDepth(node->left), countDepth(node->right));
    }
    int maxDepth(TreeNode* root) {
        return countDepth(root);
    }
};

int main(void) {
    TreeNode *t0 = new TreeNode(1);
    TreeNode *t1 = new TreeNode(2);
    TreeNode *t2 = new TreeNode(3);
    TreeNode *t3 = new TreeNode(4);
    TreeNode *t4 = new TreeNode(2);
    TreeNode *t5 = new TreeNode(4);
    TreeNode *t6 = new TreeNode(3);
    t0->left = t1;
    // t0->right = t4;
    t1->left = t2;
    // t1->right = t3;
    // t4->left = t5;
    // t4->right = t6;
    Solution solution = Solution();
    cout << solution.maxDepth(t0);
    system("pause");
    return 0;
}