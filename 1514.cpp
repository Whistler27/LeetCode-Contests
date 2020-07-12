class Solution {
public:
    vector<pair<int,double>> adj[10005];
    
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        for(int i=0;i<edges.size(); i++){
            adj[edges[i][0]].push_back(make_pair(edges[i][1],succProb[i]));
            adj[edges[i][1]].push_back(make_pair(edges[i][0],succProb[i]));
        }
        
        priority_queue<pair<double,int>> pq;
        
        
        pq.push({1.0,start});
        vector<double> v(n+1,0.0);
        while(!pq.empty()){
            int cur=pq.top().second;
            double st=pq.top().first;
            pq.pop();
            //cout << cur << " ";
            //cout << (double)st << " ";
            for(pair<int,double> edge: adj[cur]){
                 if(st*(edge.second)>v[edge.first]){
                     v[edge.first]=st*(edge.second);
                     pq.push({v[edge.first],edge.first});
                 }
                
            }
            
        }
        
        return v[end];
        
    }
};