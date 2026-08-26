//Problem=Mjority Element
//Leetcode=#229
//Topic=Array
//Approach=Sorting+Frequency counting
//Time Complexity=O(nlogn)
//Space Complexity=O(1)extra space
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int freq=1;
           while(i+1<nums.size()&&nums[i]==nums[i+1]){
            freq++;
            i++;
           }
            if(freq>nums.size()/3){
                 ans.push_back(nums[i]);
            }

        }
      return ans;  
    }
};
