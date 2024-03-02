# MyCodes---->
C++ code for 132 pattern--->
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int> s;
        int third = INT_MIN;

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] < third) return true;
            while (!s.empty() && s.top() < nums[i]) {
                third = s.top();
                s.pop();
            }
            s.push(nums[i]);
        }
        return false;
    }
};
=========================================================================================================================>
class Solution {
  public:
    int binary_to_decimal(string str) {
        
        int DecNum = 0;
        int n = str.size();
        
        for (int i = 0; i< n; i++)
        {
            DecNum += (str[i]-'0')*pow(2,n-i-1);
        }
        return DecNum;
    }
};
