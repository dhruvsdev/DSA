class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // int n = arr.size()+1;
        // int xor1=0,xor2=0;
        
        // for(int i =1;i<=n;i++) {
        //     xor1^=i;
        // }
        // for(int i =0;i<n-1;i++) {
        //     xor2^=arr[i];
        // }
        
        // return xor1^xor2;
        int n = arr.size();
        vector<int> hash(n+2);
        for(int i =0;i<n;i++) {
            hash[arr[i]]++;
        }
        for(int i =1;i<hash.size();i++) {
            if(hash[i]==0) {
                return i;
            }
        }
        return -1;
    //   long long s = arr.size();
    //   long long asum = ((s+2)*(s+1))/2;
    //   long long csum =0;
    //   for(int i =0;i<s;i++) {
    //       csum+=arr[i];
    //   }
    //   return (int)asum-csum;
    }
};