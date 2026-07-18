#include <iostream>
#include <vector>

using namespace std;

vector<int> maxSubArray(vector<int> &nums)
{
    // int maxSum = INT_MIN;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < nums.size(); j++)
    //     {
    //         sum += nums[j];
    //         maxSum = max(maxSum, sum);
    //     }
    // }
    // return maxSum;

    int maxSum = INT_MIN;
    int start = 0 ;
    int sum = 0;
    int ansStart=0;
    int ansEnd=0;
    vector<int> v;
    for(int i =0;i<nums.size();i++) {
        if(sum == 0) { 
            start =i;
        }
        sum+=nums[i];

        if(maxSum < sum) {
            maxSum = sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum < 0 ) sum =0;
    }
    v.push_back(ansStart);
    v.push_back(ansEnd);
    return v;
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
    cout << endl;
    vector<int> v = maxSubArray(nums); 
    for(auto it : v) {
        cout << it << " ";
    }
}




