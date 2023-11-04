class Solution {
public:
    int singleNumber(vector<int>& n) {
        int ns = n.size();
        if (ns==1)
        return n[0];
        if (ns==3)
        return n[0]==n[1] ? n[2] : (n[1]==n[2] ? n[0] : n[1]);
        int a = 0;
        for(int i=0; i<ns ; i++){
            a ^= n[i];
        }
        return a ;
    }
};