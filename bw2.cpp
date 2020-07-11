#define ll long long int
#define mod 1000000007
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> st;
        
        for(int i=0;i<n;i++){
            ll cur=0;
            for(int j=i;j<n; j++){
               cur+=nums[j];
                cur%mod;
                st.push_back(cur);
            }     
        }
        ll ans=0;
        sort(st.begin(),st.end());
        for(int i=left-1;i<=right-1;i++){
            ans+=st[i];
            ans%=mod;
        }
        return ans;
        
    }
};