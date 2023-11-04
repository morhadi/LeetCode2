void merge(int arr[] , int l , int mid ,int h){
    int temp[h-l+1] ;
    int i=l ,j=mid+1 ,k=0;

    while (i <= mid && j <= h ) {
        if(arr[i] < arr[j]  ) {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else {
            temp[k]= arr[j];
            j++;
            k++;
        }
    }
    if(j == h+1 ) {
        for( ; i<mid+1 && k<h-l+1  ; i++ , k++){
            temp[k]=arr[i];
        }
    }
    if(i == mid+1) {
        for( ; j<h+1 && k<h-l+1 ; j++ , k++ ){
            temp[k]=arr[j];
        }
    }

    i=l;
    j=0;
    while(i<=h && j<h-l+1){
        arr[i]=temp[j];
        i++;
        j++;
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
        int s[as];
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