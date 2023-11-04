void merge(int arr[] , int l , int mid ,int h){
    int temp[h] ;
    int i=l ,j=mid ;
    while (i <= mid && j < h ) {
        if(arr[l] < arr[mid+1]  ) {
            temp[l] = arr[l];
            l++;

        }
        // else {

        // }
    }
}
void dam(int arr[] , int l ,int h){
    if(l==h) return ;
    int mid = (l+h)/2;
    dam(arr , l , mid);
    dam(arr , mid + 1 , h);
    merge(arr , l , mid ,h);
}
class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int ais = a[0].size() , as =a.size() ;
        // int s[as];
        // set <int> s;
        int mw;
        for(int i=0 ;i<as; i++){
            int w=0;
            for(int j=0; j< ais ; j++){
                w+=a[i][j];
            }
            if(w>mw)
            mw=w;
        }
        // dam(s,0,ais);
        return mw;
    }
};