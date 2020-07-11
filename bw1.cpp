class Solution {
public:
    string reformatDate(string date) {
        string ans;
        string p=date.substr(date.size()-4);
        ans+=p;
        ans+='-';
        
        map<string,string> mp;
        mp["Jan"]="01";
        mp["Feb"]="02";
        mp["Mar"]="03";
        mp["Apr"]="04";
        mp["May"]="05";
        mp["Jun"]="06";
        mp["Jul"]="07";
        mp["Aug"]="08";
        mp["Sep"]="09";
        mp["Oct"]="10";
        mp["Nov"]="11";
        mp["Dec"]="12";
        
        p=date.substr(date.size()-8,3);
        ans+=mp[p];
        ans+='-';
        
        p="";
        p=date[0];
        if(date[1]!='t' && date[1]!='r' && date[1]!='s' && date[1]!='n') p+=date[1];
        else p="0"+p;
        ans+=p;
        return ans;
    }
};