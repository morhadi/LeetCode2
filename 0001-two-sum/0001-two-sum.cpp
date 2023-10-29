class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int ns = n.size();
        for (int i = 0 ; i < ns -1 ; i++ ) {
            for (int j =i + 1 ; j< ns ; ++j) 
            if (n[i] + n[j] == t ) 
            return {i,j} ;
        }
         return {ns -1 ,ns} ;
    }
};