class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        ///////pure chatgpttttttttttt///////
        int n = parent.size();
        vector<vector<int>> tree(n);
        for(int i = 1; i < n; i++) {
            tree[parent[i]].push_back(i);
        }
        vector<int> depth(n);
        int h = 0;
        function<void(int, int)> dfs = [&](int node, int d) {
            depth[node] = d;
            h = max(h, d);
            for(int child : tree[node]) {
                dfs(child, d + 1);
            }
        };
        dfs(0, 1);
        long long ans = 0;
        for(int i = 0; i < n; i++) {
            ans += 1LL * nums[i] * (h - depth[i] + 1);
        }
        return ans;
    }
};