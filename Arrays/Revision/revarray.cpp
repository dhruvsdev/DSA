#include <iostream>
using namespace std;

void revArray(vector<int> &nums,int low,int high);

int main() {
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> nums;

    for(int i =0;i<n;i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    revArray(nums,0,n-1);

    for(int it : nums) {
        cout << it << " ";
    }
    return 0;
}

void revArray(vector<int> &nums,int low,int high) {
    if(low>=high) return;
    else {
        swap(nums[low],nums[high]);
        low++;
        high--;
        revArray(nums,low,high);
    }
   
}