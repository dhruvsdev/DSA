class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int s=arr.size();
        vector<int> Hash(s+2);
        for(int i=0;i<s;i++) {
            Hash[arr[i]]++;
        }
        for(int i=1;i<Hash.size();i++) {
            if(Hash[i]==0) {
                return i;
            }
        }
    }
};