class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int freq = 0;

            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    freq++;
                }
            }

            if (freq == 1) {
                return nums[i];
            }
        }

        return 0;
    }
};



class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int>m;

        for(auto ele:nums){
            m[ele]++;
        }

        for(auto ele:m){
            if(ele.second==1){
                return ele.first;
            }
        }

        return 0;
    }    
    
};




