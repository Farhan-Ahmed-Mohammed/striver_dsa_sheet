class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;

        queue<pair<TreeNode*, unsigned long long>> q;
        q.push({root, 0});

        int maxWidth = 0;

        while (!q.empty()) {
            int size = q.size();

            // 👇 index of first node at this level
            unsigned long long minIndex = q.front().second;

            unsigned long long first = 0, last = 0;

            for (int i = 0; i < size; i++) {
                auto curr = q.front();
                q.pop();

                TreeNode* node = curr.first;

                // 👇 normalize index to avoid overflow
                unsigned long long index = curr.second - minIndex; // reduce big numbers by taking min element of the level ex 101 102 103 is converted to  1 2 3 

                if (i == 0) first = index;
                if (i == size - 1) last = index;

                if (node->left) {
                    q.push({node->left, 2 * index});
                }

                if (node->right) {
                    q.push({node->right, 2 * index + 1});
                }
            }

            maxWidth = max(maxWidth, (int)(last - first + 1));
        }

        return maxWidth;
    }
};
