#include <bits/stdc++.h>
#define longlong as ll

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int maxDepth(TreeNode* root) {
	if ( !root ) return 0;

	int l = maxDepth(root->left)+1; 
	int r = maxDepth(root->right)+1;

	return max(l, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);



	return 0;
}