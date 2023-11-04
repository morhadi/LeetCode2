void merge(vector<int>& arr , int l , int mid ,int h){
    vector<int> temp ;
    int i=l , j=mid+1 ;

    while (i <= mid && j <= h ) {
        if(arr[i] < arr[j]  ) {
            temp.push_back(arr[i]) ;
            i++;
        }
        else {
             temp.push_back(arr[j]) ;
            j++;
        }
    }
    if(j == h+1 ) {
        for( ; i<mid+1 ; i++ ){
            temp.push_back(arr[i]) ;
        }
    }
    if(i == mid+1) {
        for( ; j<h+1 ; j++ ){
           temp.push_back(arr[j]) ;
        }
    }

    i=l;
    while(i<=h){
        arr[i]=temp[i-l];
        i++;
        j++;
    }
}
void dam(vector<int>& arr , int l ,int h){
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
        vector<int> s (as,0) ;
        // set <int> s;
        // int mw;
        for(int i=0 ;i<as; i++){
            s[i]=0;
            // int w=0;
            for(int j=0; j< ais ; j++){
                s[i]+=a[i][j];
            }
            // if(w>mw)
            // mw=w;
        }
        dam(s,0,as-1);
        return s[as-1];
    }
};