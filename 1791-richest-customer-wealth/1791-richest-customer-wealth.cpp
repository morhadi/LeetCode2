class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ais = a[0].size() , as =a.size() ;
        //int s[as];
        set <int> s;
        for(int i=0 ;i<as; i++){
            int wi=0;
            for(int j=0; j< ais ; j++){
                wi+=a[i][j];
            }
            s.insert(wi);
        }
        return *prev(s.end());
    }
};