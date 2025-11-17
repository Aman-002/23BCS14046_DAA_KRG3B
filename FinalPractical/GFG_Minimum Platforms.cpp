class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n = arr.size();
        vector<pair<int,int>> a;
        
        for(int i=0;i<n;i++){
            a.push_back({arr[i],dep[i]});
        }
        
        sort(a.begin(),a.end());
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            while (!pq.empty() && pq.top() < a[i].first) {
                pq.pop();
            }
            pq.push(a[i].second);
            
            cnt = max(cnt,(int)pq.size());

        }
        
        return cnt;
        
    }
};
