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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) return true;
        if (p == nullptr || q == nullptr) return false;
        return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main(void) {
    TreeNode *t0 = new TreeNode(1);
    TreeNode *t1 = new TreeNode(2);
    t0->left = t1;
    cout << "t0->val: " << t0->val << endl;                 // t0->val: 1
    cout << "t0->left->val: " << t0->left->val << endl;     // t0->left->val: 2
    cout << "t0->left: " << t0->left << endl;               // t0->left: 0x1c0e9a71a50
    cout << "t0->right->val: " << t0->right->val << endl;   // t0->right: Segmentation fault
    system("pause");
    return 0;
}