class Solution {
public:
    void sortColors(vector<int>& n) {
        // int ns=n.size(),n1=0,n2=0,n0=0;
        // if(ns==1)
        // return;
        // for(int i=0;i<ns;i++){
        //     if(n[i]==0) n0++;
        //     else if(n[i]==1) n1++;
        //     else n2++;
        // }
        // vector<int> v(n0,0);
        // v.insert(v.end(),n1,1);
        // v.insert(v.end(),n2,2);
        // n=v;
        // v.clear();
        sort(n.begin(),n.end());
    }
};