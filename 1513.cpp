#define ll long long int
class Solution {
public:
    int numSub(string s) {
        int M=1e9;
        M+=7;
        ll ans=0;
        int n=s.size();
        int i=0;
        while(i<n){
            //cout << "Na,an" << " ";
            if(s[i]=='0'){
                i++;
                continue; 
                
            }
            int j=i;
            ll cnt=0;
            while(j<n && s[j]=='1'){
                cnt++;
                j++;
            }
            cnt%=M;
            ans+=(cnt)*(cnt+1)/2;
            ans%=M;
            i=j;
          
        }
        
        return ans;
        
    }
};