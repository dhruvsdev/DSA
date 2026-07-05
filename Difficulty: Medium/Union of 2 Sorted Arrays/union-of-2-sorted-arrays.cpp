class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int n1=a.size();
        int n2=b.size();
        set<int> s;
        //nums1
        for(int i =0;i<n1;i++) {
            s.insert(a[i]);
        }
        //nums2
        for(int i=0;i<n2;i++) {
            s.insert(b[i]);
        }
        //print
        vector<int> arr;
        for(auto it : s) {
            arr.push_back(it);
        }
        return arr;
    }
};