class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size() ) 
            return false ;
        
         sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
            for (int j = 0 ; j < t.size() ; j++ ){
                if (s[j] != t[j]) 
                return false ;
            }
        
        return true;
    }
};