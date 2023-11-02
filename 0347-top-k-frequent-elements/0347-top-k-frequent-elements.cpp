    class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        unordered_map<int,int> m;
        for(int i=0;i<n.size();i++){
            m[n[i]]++;
        }

        // if (k==1) {
        //     for (auto mit : m) {
        //         hf
        //     }
        // }
        // vector<pair<int,int>> v;
        // for(auto it : m){
        //     v.push_back(make_pair(it.first , it.second ));
        // }
        // sort( v.begin() , v.end() , [] ( pair<int, int>& a,  pair<int, int>& b) { return a.second > b.second; } ) ;

        set<pair<int,int>> v;
        for(auto mit : m){
            v.insert(make_pair( mit.second , mit.first ));
        }
        auto vit = v.end();
        advance( vit , -k) ;
        v.erase( v.begin() , vit );

        vector<int> v2;
        for(auto it2 : v){
            v2.push_back(it2.second);
        }
        return v2;
    }
};