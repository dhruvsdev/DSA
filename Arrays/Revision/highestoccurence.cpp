#include <iostream>
using namespace std;

int highestFreq(vector<int> &nums);

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

    cout << highestFreq(nums);

}
int highestFreq(vector<int> &nums) {
    int n = nums.size();
    int max_cnt=0;
    int cnt =0;
    int val =nums[0];
    int ans=nums[0];

    for(int i =0;i<n;i++) {
        if(nums[i]==val) {
            cnt++;
        }
        if(max_cnt < cnt) {
            max_cnt=cnt;
            ans=val;
        }
        else {
            cnt=1;
            val=nums[i];
        }
    }
    return ans;

}
