class Solution {
public:
    void sortColors(vector<int>& n) {
        int ns=n.size();

        if(ns==1)
        return;

        if(ns==2){
            if(n[0]<n[1])
            return;
            else 
            swap(n[0],n[1]);
            return;
        }

        // int a[3] = {0,0,0};


        // while (i<ns && l<h){
        //     if(n[l]==0) {
        //         l++ ;
        //         continue;
        //     }
        //     if(n[h]==2) {
        //         h-- ;
        //         continue;
        //     }
        //     if(n[i]<n[h] && n[i]>n[l]){
        //         h--;
        //         l++;
        //         continue;
        //     }
        //     if(n[i]>n[h]){
        //         swap(n[i],n[h]);
        //         i++;
        //         h--;
        //         continue;
        //     }
        //     if(n[i]<n[l]){
        //         swap(n[i],n[l]);
        //         l++;
        //         i++;
        //         continue;
        //     }
        //     if(n[i]>n[h] && n[i]<n[l]){
        //         swap(n[l],n[h]);
        //         h--;
        //         l++;
        //         continue;
        //     }
        //         i++;
        // }

        
        int  l=0 , i=l  ,h=ns-1 ;
        while(  i<=h ){
            if(n[l]==0) {
                l++ ;
                i=l+1;
                continue;
            }
            if(n[h]==2) {
                h-- ;
                continue;
            }
            if(n[l]>n[h] ) {
                swap( n[l] , n[h]);
                continue;
            } // l=1 and h=1 
            // i=l+1;
            if(n[i]==0){
                swap( n[l] , n[i]);
            }
            else if(n[i]==2){
                swap( n[h] , n[i]);
            }
            else {
                i++;
            }
        }
        // n.clear();
        // n.insert(n.end(),a[0],0);
        // n.insert(n.end(),a[1],1);
        // n.insert(n.end(),a[2],2);
    }
};