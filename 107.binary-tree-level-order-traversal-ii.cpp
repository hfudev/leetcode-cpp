/*
 * @lc app=leetcode id=107 lang=cpp
 *
 * [107] Binary Tree Level Order Traversal II
 *
 * https://leetcode.com/problems/binary-tree-level-order-traversal-ii/description/
 *
 * algorithms
 * Easy (45.98%)
 * Total Accepted:    217.9K
 * Total Submissions: 471.5K
 * Testcase Example:  '[3,9,20,null,null,15,7]'
 *
 * Given a binary tree, return the bottom-up level order traversal of its
 * nodes' values. (ie, from left to right, level by level from leaf to root).
 * 
 * 
 * For example:
 * Given binary tree [3,9,20,null,null,15,7],
 * 
 * ⁠   3
 * ⁠  / \
 * ⁠ 9  20
 * ⁠   /  \
 * ⁠  15   7
 * 
 * 
 * 
 * return its bottom-up level order traversal as:
 * 
 * [
 * ⁠ [15,7],
 * ⁠ [9,20],
 * ⁠ [3]
 * ]
 * 
 * 
 */
#include <math.h>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        int level = depth(root);
        vector<vector<int>> res(level, vector<int> {});
        levelOrder(res, root, level - 1);
        return res;
    }
private:
    int depth(TreeNode* node)
    {
        if (!node)
            return 0;
        return max(depth(node->left), depth(node->right)) + 1;
    }
    
    void levelOrder(vector<vector<int>> &res, TreeNode* node, int level)
    {
        if (!node)
            return;
        res[level].push_back(node->val);
        levelOrder(res, node->left, level - 1);
        levelOrder(res, node->right, level - 1);
    }
};

