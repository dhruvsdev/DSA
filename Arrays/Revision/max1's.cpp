#include <iostream>
using namespace std;
#include <vector>


int maxConsecutiveOnes(vector<int> &nums) {
    int n = nums.size();
    int i =0;
    int maxLen=0;
    int cnt=0;
    while(i<n) {
        if(nums[i]==1) {
            cnt++;
            maxLen=max(maxLen,cnt);
        }
        else {
            cnt=0;
        }
        i++;
    }
    return maxLen;
}

int main() {
    int n ;
    cout << "Enter size : ";
    cin >> n;

    vector<int> nums;

    for(int i =0;i<n;i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << maxConsecutiveOnes(nums);
}