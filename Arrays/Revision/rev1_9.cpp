#include <iostream>
#include <vector>
#include <set>
using namespace std;


int secLargest(vector<int> nums) {
    int n = nums.size();
    int large=nums[0];
    int slarge=-1;
    for(int i =1;i<n;i++) {
        if(nums[i]>large) {
            slarge=large;
            large=nums[i];
        }
        if(nums[i]>slarge && nums[i] !=large) {
            slarge=nums[i];
        }
    }
    return slarge;
}

int removeDuplicates(vector<int>& nums) {
    int i =0;
    for(int j =i;j<nums.size();j++) {
        if(nums[i] !=nums[j]) {
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    vector<int> nums;
    cout << "Enter size : ";
    cin >> n;
    cout << "Enter values below\n";
    for(int i =0;i<n;i++) {
        int x;
        cin >>x;
        nums.push_back(x);
    }

    // cout <<  "Second largest value : " << secLargest(nums) << endl;
    cout << removeDuplicates(nums) << endl;
}