#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l=0;
        int minLn = INT_MAX;
        int sum=0;

        for(int r=l;r<n;r++){
            sum+=nums[r];

            while(sum>=target){
                minLn = min(minLn,r-l+1);
                sum-=nums[l];
                l++;
            }            
        }
        return (minLn == INT_MAX)?0:minLn;
    }
};