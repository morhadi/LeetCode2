class Solution {
public:
    int singleNumber(vector<int>& n) {
        if (n.size() == 1)
        return n[0];
        sort(n.begin() , n.end() );
        if ( n[0] < n[1] )
        return n[0] ;
        for(int i = 1 ; i<n.size()-1 ; i++ ){
            if (n[i-1] < n[i] && n[i] < n[i+1] ) 
            return n[i] ;
        }
        return *n.rbegin();
    }
};