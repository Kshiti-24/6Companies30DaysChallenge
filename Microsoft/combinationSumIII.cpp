class Solution {
public:
vector<vector<int>> r;
 	void find(vector<int>& t, int ta, int in, int sum, int k){
 		if(t.size() == k && sum == ta){
 			r.emplace_back(t);
 		}else if(sum < ta && t.size() < k){
 			for(int i = in; i <= 9; ++i){
 				t.emplace_back(i);
 				find(t, ta, i + 1, sum + i, k);
 				t.pop_back();
 			}
 		}
 	}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> m;
        find(m, n, 1, 0, k);
        return r;
    }
};
