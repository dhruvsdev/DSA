class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {    
        // int max_val = INT_MIN;
        // for(int i =0;i<arr.size();i++) {
        //     max_val = max(arr[i],max_val);
        // }
        // int s_max = -1;
        // for(int i =0;i<arr.size();i++) {
        //     if(arr[i] !=max_val) {
        //         s_max = max(arr[i],s_max); 
        //     }
        // }
        // return s_max;
        int large = arr[0];
        int slarge =-1;
        for(int i =1 ; i<arr.size();i++) {
            if (arr[i] >large) {
                slarge =large;
                large = arr[i];
                
            }
            else if (arr[i] >slarge && arr[i] != large) {
                slarge = arr[i];
            }
        }
        return slarge;
        
        
        
    }
};