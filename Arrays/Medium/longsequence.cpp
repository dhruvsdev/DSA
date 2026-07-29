#include <iostream>
#include <vector>
using namespace std;


bool ls(vector<int>&nums,int a) {
    for(int i =0;i<nums.size();i++) {
        if(nums[i]==a) {
            return true;
        }
    }
    return false;
}
int longestConsecutive(vector<int> &nums) {
    int n = nums.size();
    int maxLength=1;
    // for(int i =0;i<n;i++) {
    //     int x = nums[i];
    //     int cnt = 1;
    //     while(ls(nums,x+1)==true) {
    //         x++;
    //         cnt++;
    //     }
    //     maxLength=max(maxLength,cnt);

    // }
    // return maxLength;
    
    //TC - O(N^3) - linear search has inner loop that runs n times each time ls is called . 

    sort(nums.begin(),nums.end());
    int cnt =1;
    for(int i =1;i<n;i++) {
        if(nums[i]-nums[i-1]==1) {
            cnt++;
            maxLength=max(maxLength,cnt);
        }
        else if(nums[i-1]==nums[i]) {
            continue;
        }
        else {
            cnt = 1;
        }    
    }
    return maxLength;

    //TC - O(nlogn) - sorting function 
    
}

int main() {
    int n ;
    vector<int> nums;
    cout << "Enter n  :";
    cin >> n;

    for(int i =0;i<n;i++) {
        int x ;
        cin >> x ;
        nums.push_back(x);
    }
    cout << longestConsecutive(nums);
}