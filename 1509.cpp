#define ll long long int
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n=nums.size();
        if(n<=4) return 0;
        sort(nums.begin(),nums.end());
        
       ll ans=1e18;
        
        int i=3,j=n-1;
        while(i>=0 && j>=i){
            ll cur=nums[j]-nums[i];
            if(cur<ans) ans=cur;
            i--;
            j--;
            
        }
        return ans;
        
    }
};