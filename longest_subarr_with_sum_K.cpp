class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;

            for (int j = i; j < n; j++) {
                sum += nums[j];

                if (sum == k) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};



class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, ans = 0;

        unordered_map<int, int> m;
        m[0] = -1;   //  base case

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            // store first occurrence only
            if (m.find(sum) == m.end()) {
                m[sum] = i;
            }

            int req_sum = sum - k;

            if (m.count(req_sum)) {
                ans = max(ans, i - m[req_sum]);
            }
        }

        return ans;
    }
};



class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int ans = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {
            sum += nums[j];

            while (sum > k) {
                sum -= nums[i];
                i++;
            }

            if (sum == k) {
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};

