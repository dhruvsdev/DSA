class Solution {
  public:
    bool isSorted(vector<int>& arr) {
            bool sorted = true;
            for(int i =0;i<arr.size()-1;i++) {
                if (arr[i] <=arr[i+1]) {
                    sorted = true;
                }
                else {
                    sorted = false;
                    break;
                }
            }    
            return sorted;
        
    }
};