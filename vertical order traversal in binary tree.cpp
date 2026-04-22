class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int,int>>> mp;
        queue<pair<TreeNode*, pair<int,int>>> q;

        // {node, {row, col}}
        q.push({root, {0, 0}});

        while (!q.empty()) {
            auto curr = q.front();
            q.pop();

            TreeNode* node = curr.first;
            int row = curr.second.first;
            int col = curr.second.second;

            // store {row, value} for each column
            mp[col].push_back({row, node->val});

            if (node->left) {
                q.push({node->left, {row+1, col-1}});
            }

            if (node->right) {
                q.push({node->right, {row+1, col+1}});
            }
        }

        vector<vector<int>> res;

        // normal for loop (iterator)
        for (auto it = mp.begin(); it != mp.end(); it++) {
            vector<pair<int,int>> vec = it->second;

            // sort by row, then value
            sort(vec.begin(), vec.end());

            vector<int> temp;
            for (auto jt = vec.begin(); jt != vec.end(); jt++) {
                temp.push_back(jt->second);
            }

            res.push_back(temp);
        }

        return res;
    }
};
