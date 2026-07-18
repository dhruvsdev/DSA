#include<iostream>
#include <vector>
#include <set>

using namespace std;

void sortColors(vector<int>& nums) {
    // multiset<int> s;
    // for(int i =0;i<nums.size();i++) {
    //     s.insert(nums[i]);
    // }
    // // for(auto it : s) {
    // //     cout << it << " ";
    // // }
    
    // nums.assign(s.begin(),s.end());
    int n = nums.size();
        for(int i =0;i<n-1;i++) {
            for(int j =i+1;j>=1;j--) {
                if(nums[j-1]>nums[j]) {
                    swap(nums[j-1],nums[j]);
                }
            }
        }
}
int main() {
    int n ;
    cout << "Enter n : ";
    cin >> n;
    vector<int> nums;
    for(int i =0;i<n;i++) {
        int x ;
        cin >> x;
        nums.push_back(x);
    }
    sortColors(nums);
    cout << endl;
    for(auto it : nums) {
        cout << it << " ";
    }
}

