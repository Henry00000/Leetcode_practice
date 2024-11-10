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

bool checkTree(TreeNode* root) {
    if (root->val == (root->left->val + root->right->val)) return true;
    else return false;
}

int main(void) {
    TreeNode *t0 = new TreeNode(10);
    TreeNode *t1 = new TreeNode(4);
    TreeNode *t2 = new TreeNode(6);
    t0->left = t1;
    t0->right = t2;
    cout << boolalpha;
    cout << "checkTree(t0): " << checkTree(t0);
    cout << endl << "======================" << endl;
    TreeNode *t3 = new TreeNode(5);
    TreeNode *t4 = new TreeNode(3);
    TreeNode *t5 = new TreeNode(1);
    t3->left = t4;
    t3->right = t5;
    cout << "checkTree(t3): " << checkTree(t3);
    return 0;
}