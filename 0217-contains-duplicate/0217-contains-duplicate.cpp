class Solution {
public:
    bool containsDuplicate( vector <int > & n) {
        int s = n.size() ;
        if (s== 1)
        return 0;
        sort( n.begin() , n.end());
        int i =0 ;
        while (  i < s - 1) {
            if (n[i] == n[i+1])
            return true ;
            i++;
        }
        return 0;
    }
};