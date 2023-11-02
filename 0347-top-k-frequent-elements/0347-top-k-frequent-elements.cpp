bool sec (pair<int,int> a , pair<int,int> b){
    return a.second > b.second ;
}
    class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        map<int,int> m;
        for(int i=0;i<n.size();i++){
            m[n[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it : m){
            v.push_back(make_pair(it.first , it.second ));
        }
        sort(v.begin(),v.end(),sec) ;
        v.erase(v.begin()+k ,v.end());
        vector<int> v2;
        for(auto it2 : v){
            v2.push_back(it2.first);
        }
        return v2;
    }
};