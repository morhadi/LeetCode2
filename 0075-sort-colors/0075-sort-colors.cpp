class Solution {
public:
    void sortColors(vector<int>& n) {
        int ns=n.size();
        if(ns==1)
        return;
        int a[3] = {0,0,0};
        for(int i=0;i<ns;i++){
            a[n[i]]++;
        }
        // vector<int> v(n0,0);
        // v.insert(v.end(),n1,1);
        // v.insert(v.end(),n2,2);
        // n=v;
        // v.clear();
        n.clear();
        n.insert(n.end(),a[0],0);
        n.insert(n.end(),a[1],1);
        n.insert(n.end(),a[2],2);
    }
};