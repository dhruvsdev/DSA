class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
//         for(int i =1;i<arr.size();i++) {
//             if(arr[i]==arr[i-1]) {
//                 for(int j =i;j<arr.size()-1;j++) {
//                     if(arr[j] <=arr[j+1]) {
//                         swap(arr[j],arr[j+1]);

//                     } 
//                 }
//             }
//         }
//         int count =1;
//         for(int i =0;i<arr.size()-1;i++) {
//             if(arr[i] < arr[i+1]) {
//                 count++;
//             }
//         }
//         vector<int> temp;
// ;        for(int i =0;i<count;i++) {
//             temp.push_back(arr[i]);
//         }
//         return temp;
           set<int> s;
           for(int i =0;i<arr.size();i++) {
               s.insert(arr[i]);
           }
           int k = s.size();
           vector<int> vec;
           for(auto it : s) {
               vec.push_back(it);
           }
           return vec;
        
    }
};