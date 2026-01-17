class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {   // avoid duplicate & self-pairs
                if (nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }

        return result;
    }
};



class Solution {
public:
    vector<pair<int, int>> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> result;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    result.push_back({i, j});
                }
            }
        }

        return result;
    }
};



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++) {
            int req = target - nums[i];

            if (m.count(req)) {
                return {i, m[req]};
            }

            m[nums[i]] = i;
        }

        return {-1, -1};
    }
};


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> v1;

        // Store value with original index
        for (int i = 0; i < n; i++) {
            v1.push_back({nums[i], i});
        }

        // Sort by value
        sort(v1.begin(), v1.end());

        int i = 0, j = n - 1;

        while (i < j) {
            int sum = v1[i].first + v1[j].first;

            if (sum == target) {
                return {v1[i].second, v1[j].second};
            } else if (sum > target) {
                j--;
            } else {
                i++;
            }
        }

        return {-1, -1};
    }
};
